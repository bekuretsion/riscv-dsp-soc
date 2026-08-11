.section .text
.globl _start

_start:
    addi x5, x0, 0
    addi x6, x0, 5

loop:
    addi x5, x5, 1
    bne  x5, x6, loop

    addi x7, x0, 99

done:
    j done
