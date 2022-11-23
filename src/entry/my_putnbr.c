/*
** EPITECH PROJECT, 2022
** workshop-student
** File description:
** my_putnbr.c
*/

int my_putnbr_at_coordinates(int x, int y, int nb)
{
    if (nb < 0) {
        my_putchar(x, y, '-');
        nb = -nb;
    }
    if (nb > 9) {
        my_put_nbr_at_coordinates(x, y, nb / 10);
        my_put_nbr_at_coordinates(x, y, nb % 10);
    } else {
        my_putchar(x, y, nb + '0');
    }
    return 0;
}
