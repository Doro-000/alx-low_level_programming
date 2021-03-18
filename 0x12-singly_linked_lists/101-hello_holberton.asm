section .data
fmt     db "%s",10,0
msg1    db "Hello",0

section .text
    extern printf
    global _main

_main:
    mov  edx, msg1
    mov  esi, 1
    mov  edi, fmt
    mov  eax, 0
    call printf

    mov  ebx, 0
    mov  eax, 1
    int  0x80
