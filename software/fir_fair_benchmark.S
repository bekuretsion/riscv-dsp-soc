.section .text
.globl _start

_start:

    # ==================================================
    # SOFTWARE FIR BENCHMARK
    #
    # coefficients = [1, 2, 3, 4]
    # samples:
    # 10,20,30,40,50,60,70,80
    #
    # Expected final output:
    #
    # 80*1 + 70*2 + 60*3 + 50*4
    # = 80 + 140 + 180 + 200
    # = 600
    #
    # x24 = software result
    #
    # x30 used as benchmark marker
    # ==================================================

    # SW START MARKER
    addi x30, x0, 1


    # --------------------------------------------------
    # Maintain software delay line:
    #
    # x20 = newest previous sample
    # x21 = second previous
    # x22 = third previous
    #
    # x24 = result
    # --------------------------------------------------

    addi x20, x0, 0
    addi x21, x0, 0
    addi x22, x0, 0


    # ==================================================
    # SAMPLE 10
    #
    # 10*1 = 10
    # ==================================================

    addi x5, x0, 10

    add x24, x0, x5

    add x22, x0, x21
    add x21, x0, x20
    add x20, x0, x5


    # ==================================================
    # SAMPLE 20
    #
    # 20*1 + 10*2 = 40
    # ==================================================

    addi x5, x0, 20

    add x24, x0, x5

    add x6, x20, x20
    add x24, x24, x6

    add x22, x0, x21
    add x21, x0, x20
    add x20, x0, x5


    # ==================================================
    # SAMPLE 30
    #
    # 30 + 20*2 + 10*3 = 100
    # ==================================================

    addi x5, x0, 30

    add x24, x0, x5

    add x6, x20, x20
    add x24, x24, x6

    add x6, x21, x21
    add x6, x6, x21
    add x24, x24, x6

    add x22, x0, x21
    add x21, x0, x20
    add x20, x0, x5


    # ==================================================
    # SAMPLE 40
    #
    # 40 + 30*2 + 20*3 + 10*4 = 200
    # ==================================================

    addi x5, x0, 40

    add x24, x0, x5

    add x6, x20, x20
    add x24, x24, x6

    add x6, x21, x21
    add x6, x6, x21
    add x24, x24, x6

    add x6, x22, x22
    add x6, x6, x6
    add x24, x24, x6

    add x22, x0, x21
    add x21, x0, x20
    add x20, x0, x5


    # ==================================================
    # SAMPLE 50
    # expected = 300
    # ==================================================

    addi x5, x0, 50

    add x24, x0, x5

    add x6, x20, x20
    add x24, x24, x6

    add x6, x21, x21
    add x6, x6, x21
    add x24, x24, x6

    add x6, x22, x22
    add x6, x6, x6
    add x24, x24, x6

    add x22, x0, x21
    add x21, x0, x20
    add x20, x0, x5


    # ==================================================
    # SAMPLE 60
    # expected = 400
    # ==================================================

    addi x5, x0, 60

    add x24, x0, x5

    add x6, x20, x20
    add x24, x24, x6

    add x6, x21, x21
    add x6, x6, x21
    add x24, x24, x6

    add x6, x22, x22
    add x6, x6, x6
    add x24, x24, x6

    add x22, x0, x21
    add x21, x0, x20
    add x20, x0, x5


    # ==================================================
    # SAMPLE 70
    # expected = 500
    # ==================================================

    addi x5, x0, 70

    add x24, x0, x5

    add x6, x20, x20
    add x24, x24, x6

    add x6, x21, x21
    add x6, x6, x21
    add x24, x24, x6

    add x6, x22, x22
    add x6, x6, x6
    add x24, x24, x6

    add x22, x0, x21
    add x21, x0, x20
    add x20, x0, x5


    # ==================================================
    # SAMPLE 80
    #
    # final expected = 600
    # ==================================================

    addi x5, x0, 80

    add x24, x0, x5

    add x6, x20, x20
    add x24, x24, x6

    add x6, x21, x21
    add x6, x6, x21
    add x24, x24, x6

    add x6, x22, x22
    add x6, x6, x6
    add x24, x24, x6


    # SW END MARKER
    addi x30, x0, 2


    # ==================================================
    # HARDWARE FIR SETUP
    #
    # Setup is deliberately OUTSIDE timed region.
    # ==================================================

    lui x10, 0x40000

    addi x5, x0, 1
    sw   x5, 4(x10)

    addi x5, x0, 2
    sw   x5, 8(x10)

    addi x5, x0, 3
    sw   x5, 12(x10)

    addi x5, x0, 4
    sw   x5, 16(x10)


    # HW START MARKER
    addi x31, x0, 1


    # ==================================================
    # SAMPLE 10
    # ==================================================

    addi x5, x0, 10
    sw   x5, 0(x10)

    addi x6, x0, 1
    sw   x6, 20(x10)


    # SAMPLE 20

    addi x5, x0, 20
    sw   x5, 0(x10)
    sw   x6, 20(x10)


    # SAMPLE 30

    addi x5, x0, 30
    sw   x5, 0(x10)
    sw   x6, 20(x10)


    # SAMPLE 40

    addi x5, x0, 40
    sw   x5, 0(x10)
    sw   x6, 20(x10)


    # SAMPLE 50

    addi x5, x0, 50
    sw   x5, 0(x10)
    sw   x6, 20(x10)


    # SAMPLE 60

    addi x5, x0, 60
    sw   x5, 0(x10)
    sw   x6, 20(x10)


    # SAMPLE 70

    addi x5, x0, 70
    sw   x5, 0(x10)
    sw   x6, 20(x10)


    # SAMPLE 80

    addi x5, x0, 80
    sw   x5, 0(x10)
    sw   x6, 20(x10)


    # Read final FIR result

    lw x25, 24(x10)


    # HW END MARKER
    addi x31, x0, 2


done:
    j done
