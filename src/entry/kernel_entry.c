#include "includes/include.h"

void kernel_main()
{
    char* video_memory = (char*) 0xb8000;
    *video_memory = 'X';
    video_memory++;
    *video_memory = 0xf0;
    putchar(1,1,'Y');
}
