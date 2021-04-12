/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** lentgh of a string
*/
#include "include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (int i = 0; str[i] != '\0'; i++);
    return (i);
}