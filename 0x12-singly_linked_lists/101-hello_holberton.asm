global main
extern printf

	selection .text
main:
	push rbp
	mov rdi, format
	mov rsi, message
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret
meassage: db "Hello, Holberton", 0
format: db "%s", 10, 0
