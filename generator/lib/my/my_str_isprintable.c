/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** haha printer goes brrrr (check if the string is pritnable)
*/
#include "include/my.h"

int my_str_isprintable(char const *str)
{
    if (str == NULL)
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32)
            return (0);
    }
    return (1);
}