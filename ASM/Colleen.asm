;nasm -f elf64 Colleen.asm && gcc -no-pie Colleen.o && ./a.out

BITS 64
;comment outside
global main
extern printf

section .data
fmt: db "BITS 64%2$c;comment outside%2$cglobal main%2$cextern printf%2$c%2$csection .data%2$cfmt: db %1$c%3$s%1$c, 0%2$c%2$csection .text%2$cmain:%2$center 0,0%2$c;comment in func%2$clea rdi, [rel fmt]%2$c%2$cmov	rsi, 34%2$cmov   rdx, 10%2$cmov   rcx, fmt%2$c%2$ccall printf%2$ccall .func%2$cjmp .exit%2$c%2$c.exit:%2$cmov rax, 0%2$cleave%2$c%2$c.func:%2$cret%2$c", 0

section .text
main:
enter 0,0
;comment in func
lea rdi, [rel fmt]

mov	rsi, 34
mov   rdx, 10
mov   rcx, fmt

call printf
call .func
jmp .exit

.exit:
mov rax, 0
leave

.func:
ret
