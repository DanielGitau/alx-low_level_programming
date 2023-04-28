section .data
    format db 'Hello, Holberton', 10, 0

section .text
    global _start

_start:
    ; write the string to stdout
    mov eax, 1          ; system call number for write
    mov edi, 1          ; file descriptor for stdout
    mov rsi, format     ; address of the string to write
    mov edx, 16         ; number of bytes to write
    syscall

    ; exit the program
    mov eax, 60         ; system call number for exit
    xor edi, edi        ; exit code 0
    syscall
