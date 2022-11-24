/*
** EPITECH PROJECT, 2022
** workshop-student
** File description:
** my_putnbr.c
*/
#include "vga.h"

int putnbr(int x, int y, int nb, char background, char text)
{
    if (nb < 0){
        nb = nb * -1;
        x += putchar(x, y, '-', background, text);
    }
    if (nb < 10){
        x += putchar(x, y, '0' + nb, background, text);
        return x;
    } else{
        x = putnbr(x, y, (nb - (nb % 10)) / 10, background, text);
        x += putchar(x, y, '0' + (nb % 10), background, text);
        return x;
    }
}
