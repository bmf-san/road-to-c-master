#include <stdio.h>

int main() {
    fputc(0x41, stdout);
    fputc(0xD, stdout);
    fputc(0x42, stdout);
    putc(0xD, stdout);
    putc(0xA, stdout);
    putchar(0x43);
    putchar(0xD);
    putchar(0xA);
    fputs("hello", stdout);
    puts("hello");
    fprintf(stdout, "hello");
    printf("hello");

    return 0;
}

// reference http://www.itsenka.com/contents/development/c/standardio.html