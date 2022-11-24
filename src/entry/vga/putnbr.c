/*
** EPITECH PROJECT, 2022
** workshop-student
** File description:
** my_putnbr.c
*/
#include "vga.h"

int putnbr(int x, int y, int nb)
{
    if (nb < 0){
        nb = nb * -1;
        putchar(x, y, '-');
        x++;
    }
    if (nb < 10){
        putchar(x, y, '0' + nb);
        return x + 1;
    } else{
        x = putnbr(x, y, (nb - (nb % 10)) / 10);
        putchar(x, y, '0' + (nb % 10));
        return x + 1;
    }
}
