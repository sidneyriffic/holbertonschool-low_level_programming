    section .data
msg:	db	"Hello, Holberton",10
    global _start

    section .text
_start:
    mov	rax, 1
    mov	rdi, 1
    mov	rsi, msg
    mov	rdx, 17
    syscall
    mov rax, 60
    xor rdi, rdi
    syscall
