#include "vga.h"

void kernel_main()
{
    char background = BLUE;
    char text = WHITE;
    clear_screen(background, text);
    int x = 34;
    int y = 12;
    char hello[] = "Hello World !";
    char flags[] = "s";
    mini_printf(x, y, background, text, flags, hello, 42);
}
