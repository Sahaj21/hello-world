; assemble: nasm -f elf32 hello_linux_i386.asm
; link: ld -m elf_i386 hello_linux_i386.o -o hello_linux_i386
; execute: ./hello_linux_i386
BITS 32

section .data
    hello db "Hello world", 0Ah
    hello_l equ $-hello

section .text
global _start
_start:
    mov eax, 4
    mov ebx, 1
    mov ecx, hello
    mov edx, hello_l
    int 80h
    mov eax, 1
    xor ebx, ebx
    int 80h
