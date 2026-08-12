.RECIPEPREFIX := >

VERILATOR = verilator

RISCV_GCC = riscv64-unknown-elf-gcc
RISCV_OBJCOPY = riscv64-unknown-elf-objcopy
RISCV_OBJDUMP = riscv64-unknown-elf-objdump


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


.PHONY: \
	all \
	soc-test \
	benchmark \
	fair-benchmark \
	scaling-benchmark \
	fir \
	mmio \
	clean


all: soc-test


# ============================================================
# CPU -> FIR SOC TEST
# ============================================================

soc-test:
> $(RISCV_GCC) \
	-march=rv32i \
	-mabi=ilp32 \
	-nostdlib \
	-nostartfiles \
	-Ttext=0x0 \
	software/fir_test.S \
	-o software/fir_test.elf

> $(RISCV_OBJCOPY) \
	-O binary \
	software/fir_test.elf \
	software/fir_test.bin

> python3 scripts/bin2hex.py \
	software/fir_test.bin \
	programs/fir_test.hex

> cp programs/fir_test.hex programs/program.hex

> rm -rf obj_dir

> $(VERILATOR) \
	--binary \
	--timing \
	-Wall \
	-Wno-fatal \
	$(RTL) \
	tb/tb_riscv_cpu.sv \
	--top-module tb_riscv_cpu

> ./obj_dir/Vtb_riscv_cpu


# ============================================================
# ORIGINAL BENCHMARK
# ============================================================

benchmark:
> $(RISCV_GCC) \
	-march=rv32i \
	-mabi=ilp32 \
	-nostdlib \
	-nostartfiles \
	-Ttext=0x0 \
	software/fir_benchmark.S \
	-o software/fir_benchmark.elf

> $(RISCV_OBJCOPY) \
	-O binary \
	software/fir_benchmark.elf \
	software/fir_benchmark.bin

> python3 scripts/bin2hex.py \
	software/fir_benchmark.bin \
	programs/fir_benchmark.hex

> cp programs/fir_benchmark.hex programs/program.hex

> rm -rf obj_dir

> $(VERILATOR) \
	--binary \
	--timing \
	-Wall \
	-Wno-fatal \
	$(RTL) \
	tb/tb_fir_benchmark.sv \
	--top-module tb_fir_benchmark

> ./obj_dir/Vtb_fir_benchmark


# ============================================================
# FAIR 8-SAMPLE BENCHMARK
# ============================================================

fair-benchmark:
> $(RISCV_GCC) \
	-march=rv32i \
	-mabi=ilp32 \
	-nostdlib \
	-nostartfiles \
	-Ttext=0x0 \
	software/fir_fair_benchmark.S \
	-o software/fir_fair_benchmark.elf

> $(RISCV_OBJCOPY) \
	-O binary \
	software/fir_fair_benchmark.elf \
	software/fir_fair_benchmark.bin

> python3 scripts/bin2hex.py \
	software/fir_fair_benchmark.bin \
	programs/fir_fair_benchmark.hex

> cp programs/fir_fair_benchmark.hex programs/program.hex

> rm -rf obj_dir

> $(VERILATOR) \
	--binary \
	--timing \
	-Wall \
	-Wno-fatal \
	$(RTL) \
	tb/tb_fir_fair_benchmark.sv \
	--top-module tb_fir_fair_benchmark

> ./obj_dir/Vtb_fir_fair_benchmark


# ============================================================
# 8 / 16 / 32 SAMPLE SCALING BENCHMARK
# ============================================================

scaling-benchmark:
> $(RISCV_GCC) \
	-march=rv32i \
	-mabi=ilp32 \
	-nostdlib \
	-nostartfiles \
	-Ttext=0x0 \
	software/fir_scaling_benchmark.S \
	-o software/fir_scaling_benchmark.elf

> $(RISCV_OBJCOPY) \
	-O binary \
	software/fir_scaling_benchmark.elf \
	software/fir_scaling_benchmark.bin

> python3 scripts/bin2hex.py \
	software/fir_scaling_benchmark.bin \
	programs/fir_scaling_benchmark.hex

> cp \
	programs/fir_scaling_benchmark.hex \
	programs/program.hex

> rm -rf obj_dir

> $(VERILATOR) \
	--binary \
	--timing \
	-Wall \
	-Wno-fatal \
	$(RTL) \
	tb/tb_fir_scaling_benchmark.sv \
	--top-module tb_fir_scaling_benchmark

> ./obj_dir/Vtb_fir_scaling_benchmark


# ============================================================
# FIR UNIT TEST
# ============================================================

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


# ============================================================
# MMIO TEST
# ============================================================

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


# ============================================================
# CLEAN
# ============================================================

clean:
> rm -rf obj_dir
> rm -f software/*.elf
> rm -f software/*.bin
> rm -f programs/program.hex