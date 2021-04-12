/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** str cat but with n lenght
*/
#include "include/my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int i;
    int j;

    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0' && j < n; j++) {
        dest [i + j] = src[j];
    }
    dest[i + j] = '\0';
    return (dest);
}