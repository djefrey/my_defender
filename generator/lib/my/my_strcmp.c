/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** compare two strings
*/
#include "include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int var = 0;

    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            var = s1[i] - s2[i];
            return (var);
        }
    }
    return (var);
}
