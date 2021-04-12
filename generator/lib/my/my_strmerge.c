/*
** EPITECH PROJECT, 2021
** library
** File description:
** my_strcat but with undifined space before
*/
#include "include/my.h"

char *my_strmerge(char *dest, char *src)
{
    char *temp = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    if (temp == NULL)
        return (NULL);
    my_strcpy(temp, dest);
    my_strcat(temp, src);
    return (temp);
}