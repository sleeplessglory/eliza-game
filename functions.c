#include <stdarg.h>
#include <stdio.h>

void PRINT(const char *format, ...) {
    va_list args;
    va_start(args, format);

    vprintf(format, args);

    va_end(args);
}

void input(char *target) {
    fgets(target, 512, stdin);
}