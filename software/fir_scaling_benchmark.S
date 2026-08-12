.section .text
.globl _start

_start:

    # ==================================================
    # FIR SCALING BENCHMARK
    #
    # Samples:
    #   10, 20, 30, ... 320
    #
    # Coefficients:
    #   [1, 2, 3, 4]
    #
    # Milestone outputs:
    #
    #   sample 8  -> 600
    #   sample 16 -> 1400
    #   sample 32 -> 3000
    #
    # SOFTWARE:
    #   x24 = current output
    #   x27 = processed sample count
    #   x30 = SW timing marker
    #
    # HARDWARE:
    #   x25 = current output
    #   x28 = processed sample count
    #   x31 = HW timing marker
    # ==================================================


    # ==================================================
    # SOFTWARE FIR SETUP
    #
    # Delay line:
    #   x20 = x[n-1]
    #   x21 = x[n-2]
    #   x22 = x[n-3]
    #
    # x5  = current sample
    # x27 = counter
    # x29 = limit = 32
    #
    # Setup happens BEFORE timing starts.
    # ==================================================

    addi x20, x0, 0
    addi x21, x0, 0
    addi x22, x0, 0

    addi x5,  x0, 10

    addi x27, x0, 0
    addi x29, x0, 32


    # --------------------------------------------------
    # SOFTWARE START MARKER
    # --------------------------------------------------

    addi x30, x0, 1


sw_loop:

    # ==================================================
    # y =
    #
    # x[n]     * 1
    # x[n-1]   * 2
    # x[n-2]   * 3
    # x[n-3]   * 4
    #
    # RV32I has no MUL, therefore constants are
    # implemented with ADD operations.
    # ==================================================


    # x[n] * 1

    add x24, x0, x5


    # x[n-1] * 2

    add x6, x20, x20
    add x24, x24, x6


    # x[n-2] * 3

    add x6, x21, x21
    add x6, x6, x21

    add x24, x24, x6


    # x[n-3] * 4

    add x6, x22, x22
    add x6, x6, x6

    add x24, x24, x6


    # ==================================================
    # SHIFT SOFTWARE DELAY LINE
    # ==================================================

    add x22, x0, x21
    add x21, x0, x20
    add x20, x0, x5


    # ==================================================
    # NEXT SAMPLE
    # ==================================================

    addi x5, x5, 10

    addi x27, x27, 1


    # Continue until 32 samples

    bne x27, x29, sw_loop


    # --------------------------------------------------
    # SOFTWARE END MARKER
    # --------------------------------------------------

    addi x30, x0, 2



    # ==================================================
    # HARDWARE FIR SETUP
    #
    # FIR base = 0x40000000
    #
    # Setup happens BEFORE hardware timing starts.
    # ==================================================

    lui x10, 0x40000


    # coefficient 0 = 1

    addi x6, x0, 1
    sw   x6, 4(x10)


    # coefficient 1 = 2

    addi x6, x0, 2
    sw   x6, 8(x10)


    # coefficient 2 = 3

    addi x6, x0, 3
    sw   x6, 12(x10)


    # coefficient 3 = 4

    addi x6, x0, 4
    sw   x6, 16(x10)


    # current sample = 10

    addi x5, x0, 10


    # start value = 1

    addi x6, x0, 1


    # sample counter

    addi x28, x0, 0


    # limit

    addi x29, x0, 32


    # --------------------------------------------------
    # HARDWARE START MARKER
    # --------------------------------------------------

    addi x31, x0, 1


hw_loop:

    # ==================================================
    # WRITE INPUT SAMPLE
    # ==================================================

    sw x5, 0(x10)


    # ==================================================
    # START FIR
    # ==================================================

    sw x6, 20(x10)


    # ==================================================
    # READ RESULT
    #
    # x25 receives current FIR output
    # ==================================================

    lw x25, 24(x10)


    # ==================================================
    # NEXT SAMPLE
    # ==================================================

    addi x5, x5, 10

    addi x28, x28, 1


    # Continue until 32 samples

    bne x28, x29, hw_loop


    # --------------------------------------------------
    # HARDWARE END MARKER
    # --------------------------------------------------

    addi x31, x0, 2


done:

    j done
