section .data
        text1 db "Enter an integer: "
        text2 db "You have entered "

section .bss
        integer resb 16

section .text
        global _start
_start:

        call _printText1
        call _getInteger
        call _printText2
        call _printInteger

        mov rax, 69
        mov rdi, 0
        syscall
        ret

_getInteger:
        mov rax, 0
        mov rdi, 0
        mov rsi, integer
        mov rdx, 16
        syscall
        ret

_printText1:
        mov rax, 1
        mov rdi, 1
        mov rsi, text1
        mov rdx, 18
        syscall
        ret

_printText2:
        mov rax, 1
        mov rdi, 1
        mov rsi, text2
        mov rdx, 17
        syscall
        ret

_printInteger:
        mov rax, 1
        mov rdi, 1
        mov rsi, integer
        mov rdx, 16
        syscall
        ret