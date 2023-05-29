global main
extern printf

SECTION .text
main:
mov rdi, message
call printf
ret
message:
	db "hello, holberton", 10, 0
