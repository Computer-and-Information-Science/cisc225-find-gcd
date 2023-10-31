; Hello World in NASM assembly with C Library

global main             ; expose program entry point
extern printf           ; declare external function

section .text           ; start of code segment

main:
    push rbp                ; preserve base pointer
    mov rbp,rsp             ; copy stack pointer


    pop rbp                 ; restore base pointer
    xor rax,rax             ; exit status 0
    ret                     ; exit main function

section .data           ; start of initialized data segment

section .bss            ; start of uninitialized data segment 