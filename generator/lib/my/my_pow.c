/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** raise a number to the power
*/
#include "include/my.h"

int my_pow(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (p != 0)
        return (nb * my_pow(nb, p - 1));
}
