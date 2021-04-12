/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** reverse a string
*/
#include "include/my.h"

char *my_revstr(char *str)
{
    int temp;
    int i = 0;
    int j = 0;

    for (i = 0; str[i] != '\0'; i++);
    i = i - 1;
    for (i; i > j; j++) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i--;
    }
    return (str);
}
