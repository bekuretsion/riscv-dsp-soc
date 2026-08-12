.RECIPEPREFIX := >

VERILATOR = verilator

RISCV_GCC = riscv64-unknown-elf-gcc
RISCV_OBJCOPY = riscv64-unknown-elf-objcopy
RISCV_OBJDUMP = riscv64-unknown-elf-objdump


PROGRAM = fir_test

ASM = software/$(PROGRAM).S
ELF = software/$(PROGRAM).elf
BIN = software/$(PROGRAM).bin
HEX = programs/$(PROGRAM).hex


TOP = tb_riscv_cpu


RTL = \
	rtl/cpu/alu.sv \
	rtl/cpu/regfile.sv \
	rtl/cpu/decoder.sv \
	rtl/memory/data_memory.sv \
	rtl/accelerator/fir_accelerator.sv \
	rtl/bus/mmio_interconnect.sv \
	rtl/cpu/datapath.sv \
	rtl/cpu/cpu_core.sv \
	rtl/cpu/pc.sv \
	rtl/memory/instruction_memory.sv \
	rtl/cpu/riscv_cpu.sv


TB = tb/tb_riscv_cpu.sv


.PHONY: all program disasm sim run fir mmio clean


all: program sim


program:
> $(RISCV_GCC) \
	-march=rv32i \
	-mabi=ilp32 \
	-nostdlib \
	-nostartfiles \
	-Ttext=0x0 \
	$(ASM) \
	-o $(ELF)

> $(RISCV_OBJCOPY) \
	-O binary \
	$(ELF) \
	$(BIN)

> python3 scripts/bin2hex.py \
	$(BIN) \
	$(HEX)

> @echo ""
> @echo "Generated $(HEX)"
> @echo ""


disasm: program
> $(RISCV_OBJDUMP) -d $(ELF)


sim:
> $(VERILATOR) \
	--binary \
	--timing \
	-Wall \
	-Wno-fatal \
	$(RTL) \
	$(TB) \
	--top-module $(TOP)

> ./obj_dir/V$(TOP)


run:
> ./obj_dir/V$(TOP)


fir:
> rm -rf obj_dir

> $(VERILATOR) \
	--binary \
	--timing \
	-Wall \
	-Wno-fatal \
	rtl/accelerator/fir_accelerator.sv \
	tb/tb_fir_accelerator.sv \
	--top-module tb_fir_accelerator

> ./obj_dir/Vtb_fir_accelerator


mmio:
> rm -rf obj_dir

> $(VERILATOR) \
	--binary \
	--timing \
	-Wall \
	-Wno-fatal \
	rtl/memory/data_memory.sv \
	rtl/accelerator/fir_accelerator.sv \
	rtl/bus/mmio_interconnect.sv \
	tb/tb_mmio_interconnect.sv \
	--top-module tb_mmio_interconnect

> ./obj_dir/Vtb_mmio_interconnect


clean:
> rm -rf obj_dir
> rm -f software/*.elf
> rm -f software/*.bin