/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** is my string... UPPER ?
*/
#include "include/my.h"

int my_str_isupper(char const *str)
{
    if (str == NULL)
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 65 || str[i] > 90)
            return (0);
    }
    return (1);
}