/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** square root of a whole number
*/
#include "include/my.h"

int my_sqrt(int nb)
{
    int save = nb;
    int squareroot;
    int i;

    if (nb <= 0)
        return (0);
    for (nb = 1; nb != save; nb++) {
        squareroot = my_pow(nb, 2);
        if (squareroot == save)
            i++;
    }
    if (i != 0)
        return (nb);
    else
        return (0);
}