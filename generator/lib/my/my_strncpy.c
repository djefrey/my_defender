/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** copie n charachters from a string into another
*/
#include "include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i < n &&  src[i] != '\0'; i++)
        dest[i] = src[i];
    for (i ; i < n; i++)
        dest[i] = '\0';

    return (dest);
}