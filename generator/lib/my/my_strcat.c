/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concacenate two strings
*/
#include "include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i;
    int j;

    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0'; j++) {
        dest [i + j] = src[j];
    }
    dest[i + j] = '\0';
    return (dest);
}