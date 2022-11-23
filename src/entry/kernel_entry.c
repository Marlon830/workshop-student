#include "vga.h"

void kernel_main()
{
    clear_screen(RED, RED);
    char str[] = "cc";
    mini_printf(0,0,str,'H','W');
}
