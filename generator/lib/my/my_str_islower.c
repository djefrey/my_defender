/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** is my str contains only lowercase charachter
*/
#include "include/my.h"

int my_str_islower(char const *str)
{
    if (str == NULL)
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 97 || str[i] > 122)
            return (0);
    }
    return (1);
}