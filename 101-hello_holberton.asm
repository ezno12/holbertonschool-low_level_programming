extern printf			; declare external function printf
section .data 			; data section
	fmt:	db "Hello, Holberton", 10, 0	; message with new line

section .text			; code section
	global main		; entry point

main:

	push	rbp		; set up stack frame
	mov 	rdi, fmt	; format for printf
	mov	rax, 0		; no xmm registers
	call	printf		; Call C function
	pop 	rbp		; restore stack
	mov 	rax, 0		; no error, return values
	ret			; return

