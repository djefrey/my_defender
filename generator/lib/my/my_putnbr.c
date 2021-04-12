/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** redisplay a given number
*/
#include "include/my.h"

void special_case(int biggest, int nb)
{
    if (biggest == 1)
        my_putchar ('8');
    if (nb == 0)
        my_putchar ('0');
}

int my_putnbr(int nb)
{
    int biggest = 0;

    if (nb == -2147483648) {
        biggest = 1;
        nb = nb / 10;
    }
    if (nb < 0) {
        my_putchar ('-');
        nb = nb * -1;
    }
    if (nb > 0) {
        if (nb >= 10) {
            my_putnbr (nb / 10);
            my_putchar('0' + nb % 10);
        }
        else
            my_putchar('0' + nb % 10);
    }
    special_case(biggest, nb);
    return (0);
}