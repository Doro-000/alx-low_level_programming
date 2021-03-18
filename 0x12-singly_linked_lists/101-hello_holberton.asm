section .data:
      fmt     db "Hello, Holberton",10

section .text:
    extern printf
    global main

main:
mov  edi, fmt
mov  eax, 0
call printf

mov  ebx, 0
mov  eax, 1
int  0x80
