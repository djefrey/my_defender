/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** capitalize the first charachters
*/
#include "include/my.h"

char *my_strcapitalize(char *str)
{
    if (str[0] == '\0')
        return (0);
    my_strlowcase(str);
    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }
    return (str);
}