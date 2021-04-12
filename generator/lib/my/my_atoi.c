/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** transform string in Int
*/
#include "include/my.h"

int my_atoi(char const *str)
{
    long long int nb = 0;
    int i = 0;
    int nbneg = 0;

    for (int j = 0;str[j] != '\0'; j++) {
        if (str[j] == '-')
            nbneg++;
        if (str[j] == '-' || str[j] == '+')
            i++;
    }
    for (i; str[i] != '\0' && str[i] <= 57 && str[i] >= 48; i++)
        nb = nb * 10 + str[i] - '0';
    if (nbneg != 0 && nbneg % 2 != 0)
        nb = nb * -1;
    if (nb <= -214783649 || nb >= 2147483648)
        return (0);
    else
        return ((int)nb);
}