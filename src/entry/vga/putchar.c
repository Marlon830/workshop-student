#include "vga.h"

int putchar(int x, int y, char c, char background, char text)
{
    char *video_memory = (char*) 0xb8000 + (2 * y * 80 + x * 2);
    *video_memory = c;
    video_memory++;
    *video_memory = set_vga_cell(background, text);
    return 1;
}
