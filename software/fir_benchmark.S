.section .text
.globl _start

_start:

    # ==================================================
    # SOFTWARE FIR RESULT
    #
    # coefficients = [1,2,3,4]
    # samples      = [10,20,30,40]
    #
    # final output = 40*1 + 30*2 + 20*3 + 10*4
    #              = 200
    #
    # result stored in x24
    # ==================================================

    addi x5, x0, 40
    add  x20, x0, x5

    addi x5, x0, 30
    add  x21, x5, x5

    addi x5, x0, 20
    add  x22, x5, x5
    add  x22, x22, x5

    addi x5, x0, 10
    add  x23, x5, x5
    add  x23, x23, x23

    add  x24, x20, x21
    add  x24, x24, x22
    add  x24, x24, x23


    # ==================================================
    # HARDWARE FIR
    #
    # result stored in x25
    # ==================================================

    lui x10, 0x40000


    # coefficients

    addi x5, x0, 1
    sw   x5, 4(x10)

    addi x5, x0, 2
    sw   x5, 8(x10)

    addi x5, x0, 3
    sw   x5, 12(x10)

    addi x5, x0, 4
    sw   x5, 16(x10)


    # sample 10

    addi x5, x0, 10
    sw   x5, 0(x10)

    addi x6, x0, 1
    sw   x6, 20(x10)


    # sample 20

    addi x5, x0, 20
    sw   x5, 0(x10)

    sw   x6, 20(x10)


    # sample 30

    addi x5, x0, 30
    sw   x5, 0(x10)

    sw   x6, 20(x10)


    # sample 40

    addi x5, x0, 40
    sw   x5, 0(x10)

    sw   x6, 20(x10)


    # Read final hardware result

    lw x25, 24(x10)


done:
    j done