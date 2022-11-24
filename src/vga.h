#ifndef __VGA_H__
#define __VGA_H__

enum colors {BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, 
BROWN, WHITE, GRAY, LBLUE, LGREEN, LCYAN, LRED, LMAGENTA, YELLOW, BRBLUE};

void clear_screen(char background, char text);
int putchar(int x, int y, char c,char background, char text);
int putnbr(int x, int y, int nb, char background, char text);
int mini_printf(int x, int y, char background, char text, char *str, ...);
unsigned char set_vga_cell(char background, char text);
int putstr(char *str, int x, int y, char background, char text);

#endif