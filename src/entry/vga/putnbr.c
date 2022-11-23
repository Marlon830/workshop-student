/*
** EPITECH PROJECT, 2022
** workshop-student
** File description:
** my_putnbr.c
*/

int putnbr(int x, int y, int nb)
{
    if (nb < 0) {
        putchar(x, y, '-');
        nb = -nb;
    }
    if (nb > 9) {
        put_nbr(x, y, nb / 10);
        put_nbr(x, y, nb % 10);
    } else {
        putchar(x, y, nb + '0');
    }
    return 0;
}
