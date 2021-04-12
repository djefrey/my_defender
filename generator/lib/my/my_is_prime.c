/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** check if a given numer is prime
*/
#include "include/my.h"

int my_is_prime(int nb)
{
    int i;
    int mod = 0;

    if (nb == 0 || nb == 1)
        return (0);
    for (i = 2; i != nb; i++) {
        if (nb % i == 0)
            return (0);
        else
            mod++;
    }
    if (mod != 0)
        return (1);
}
