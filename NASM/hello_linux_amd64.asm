; assemble: nasm -f elf64 hello_linux_amd64.asm
; link: ld -m elf_x86_64 hello_linux_amd64.o -o hello_linux_amd64
; execute: ./hello_linux_amd64
BITS 64

section .data
    hello db "Hello world", 0Ah
    hello_l equ $-hello

section .text
global _start
_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, hello
    mov rdx, hello_l
    syscall
    mov rax, 03Ch
    xor rdi, rdi
    syscall
