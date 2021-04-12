/*
** EPITECH PROJECT, 2020
** my_strlowercase
** File description:
** turn every character in lower case
*/
#include "include/my.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 90 && str[i] >= 65)
            str[i] = str[i] + 32;
    }
    return (str);
}