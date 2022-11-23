#include <stdarg.h>
#include "vga.h"

void mini_printf(int x, int y, char *str, ...)
{
    va_list ap;
    va_start(ap, str);
    int i = 0;
    char c;
    //char *str;
    int d;

    while (str[i] != '\0') {
        if (str[i] == 'c') {
            c = va_arg(ap, int);
            putchar(x, y, c);
            x++;
        }
        //if (str[i] == 's') {
            //str = va_arg(ap, char *);
            //putstr(x, y, str);
        //}
        if (str[i] == 'i') {
            d = va_arg(ap, int);
            putnbr(x, y, d);
            x++;
        }
        i++;
    }
}
