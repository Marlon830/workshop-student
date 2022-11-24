#include "vga.h"

int putstr(char *str, int x, int y, char background, char text)
{
    int i = 0;
    for (; str[i] != 0; i++){
        putchar(x, y, str[i], background, text);
        x++;
    }
    return i;
}
