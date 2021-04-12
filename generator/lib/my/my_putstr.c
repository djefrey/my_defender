/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** display one-by-one the characters of a string.
*/
#include "include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    for (i; str[i]; i++);
    write(1, str, i);
    return (i);
}

