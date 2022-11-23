#ifndef __VGA_H__
#define __VGA_H__

enum colors {BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, 
BROWN, WHITE, GRAY, LBLUE, LGREEN, LCYAN, LRED, LMAGENTA, YELLOW, BRBLUE};

void clear_screen(char background, char text);
void putchar(int x, int y, char c);
int putnbr(int x, int y, int nb);
void mini_printf(int x, int y, char *str, ...);
unsigned char set_vga_cell(char background, char text);

#endif