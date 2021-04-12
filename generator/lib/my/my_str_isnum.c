/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** is my string only digits ???
*/
#include "include/my.h"

int my_str_isnum(char const *str)
{
    if (str == NULL)
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9' ) && str[i] != 10)
            return (0);
    }
    return (1);
}