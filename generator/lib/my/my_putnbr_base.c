/*
** EPITECH PROJECT, 2020
** my_putnbrbase
** File description:
** change the base of calcul of the number, in a given base
*/
#include "include/my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int i;

    for (i = 0; base[i] != '\0'; i++);
    if (nbr < 0) {
        nbr = nbr * -1;
        my_putchar('-');
    }
    if (nbr == 0)
        return (0);
    else
        my_putnbr_base(nbr / i, base);
    my_putchar(base[nbr % i]);
    return (0);
}
