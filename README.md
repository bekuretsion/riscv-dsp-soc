# RISC-V DSP SoC with FIR Hardware Accelerator


A small RISC-V System-on-Chip implemented in SystemVerilog, featuring a custom RV32I CPU, memory-mapped RAM, and a hardware FIR DSP accelerator.

The project demonstrates the complete path from software running on a RISC-V processor to a memory-mapped hardware accelerator, including RTL implementation, assembly programs, Verilator simulation, waveform verification, and software-vs-hardware performance benchmarking.

---

## Project Overview
8

The SoC contains:

- Custom 32-bit RISC-V CPU
- RV32I instruction support
- Register file
- ALU
- Instruction decoder
- Program counter and control-flow logic
- Instruction memory
- Data memory
- Load/store support
- Branch support
- Jump support
- Memory-mapped I/O interconnect
- 4-tap FIR hardware accelerator
- RISC-V assembly test programs
- Verilator testbenches
- GTKWave waveform support
- Software vs hardware FIR benchmarks

The main goal is to demonstrate hardware/software co-design by allowing software executing on the RISC-V CPU to configure and operate a DSP accelerator through memory-mapped I/O.

---

# Architecture

The high-level architecture is:

```text
                  +----------------------+
                  |    Instruction       |
                  |      Memory          |
                  +----------+-----------+
                             |
                             | instruction
                             v
                  +----------------------+
                  |                      |
                  |     RV32I CPU        |
                  |                      |
                  |  +----------------+  |
                  |  | Decoder        |  |
                  |  +----------------+  |
                  |  | Register File  |  |
                  |  +----------------+  |
                  |  | ALU            |  |
                  |  +----------------+  |
                  |  | PC / Branch    |  |
                  |  +----------------+  |
                  |                      |
                  +----------+-----------+
                             |
                             | load/store
                             |
                             v
                  +----------------------+
                  |   MMIO Interconnect  |
                  +----------+-----------+
                             |
                   +---------+---------+
                   |                   |
                   v                   v
          +----------------+   +------------------+
          |                |   |                  |
          |   Data RAM     |   | FIR Accelerator  |
          |                |   |                  |
          +----------------+   +------------------+
