#include <stdarg.h>
#include "vga.h"

int mini_printf(int x, int y, char background, char text, char *str, ...)
{
    va_list ap;
    va_start(ap, str);
    char c;
    int d;
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == 'c') {
            c = va_arg(ap, int);
            x += putchar(x, y, c, background, text);
        }
        if (str[i] == 's') {
            char *string = va_arg(ap, char *);
            x += putstr(string, x, y, background, text);

        }
        if (str[i] == 'i') {
            d = va_arg(ap, int);
            x = putnbr(x, y, d, background, text);
        }
    }
    return x;
}
