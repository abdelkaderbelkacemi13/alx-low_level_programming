section .data
    format db "Hello, Holberton",0xa,0
    fmt_len equ $ - format

section .text
    global main
    extern printf

main:
    push rdi
    push rsi
    push rcx
    mov rdi, format
    call printf
    pop rcx
    pop rsi
    pop rdi

    mov rax, 60
    xor rdi, rdi
    syscall

section .bss
    resb 8

