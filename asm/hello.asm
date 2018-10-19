section .data
string:     db 'Hello world!', 0Ah
string_len: equ $ - string

section .text                        
global _start

_start:
	mov	eax, 4
	mov	ebx, 1

	mov	ecx, string
	mov	edx, string_len
	int	80h

	mov	eax, 1
	mov	ebx, 0
	int	80h
