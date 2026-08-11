VERILATOR = verilator
RISCV_GCC = riscv64-unknown-elf-gcc
RISCV_OBJCOPY = riscv64-unknown-elf-objcopy
RISCV_OBJDUMP = riscv64-unknown-elf-objdump

TOP = tb_riscv_cpu

RTL = \
	rtl/cpu/alu.sv \
	rtl/cpu/regfile.sv \
	rtl/cpu/decoder.sv \
	rtl/memory/data_memory.sv \
	rtl/cpu/datapath.sv \
	rtl/cpu/cpu_core.sv \
	rtl/cpu/pc.sv \
	rtl/memory/instruction_memory.sv \
	rtl/cpu/riscv_cpu.sv

TB = tb/tb_riscv_cpu.sv

ASM = software/loop.S
ELF = software/loop.elf
BIN = software/loop.bin
HEX = programs/loop.hex

.PHONY: all program disasm sim run clean

all: program sim

program:
	$(RISCV_GCC) \
		-march=rv32i \
		-mabi=ilp32 \
		-nostdlib \
		-nostartfiles \
		-Ttext=0x0 \
		$(ASM) \
		-o $(ELF)

	$(RISCV_OBJCOPY) \
		-O binary \
		$(ELF) \
		$(BIN)

	python3 scripts/bin2hex.py

	@echo ""
	@echo "Generated $(HEX)"
	@echo ""

disasm: program
	$(RISCV_OBJDUMP) -d $(ELF)

sim:
	$(VERILATOR) \
		--binary \
		--timing \
		-Wall \
		-Wno-fatal \
		$(RTL) \
		$(TB) \
		--top-module $(TOP)

	./obj_dir/V$(TOP)

run:
	./obj_dir/V$(TOP)

clean:
	rm -rf obj_dir
	rm -f $(ELF)
	rm -f $(BIN)