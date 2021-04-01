/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solver utils
*/

#include <stdlib.h>
#include <stdio.h>

char *read_file(char *filepath)
{
    FILE *file = fopen(filepath, "r");
    size_t size = 0;
    char *str = NULL;

    if (!file)
        return (NULL);
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fseek(file, 0, SEEK_SET);
    if (!(str = malloc(sizeof(char) * (size + 1))) ||
    !fread(str, sizeof(char), size, file))
        return (NULL);
    str[size] = 0;
    fclose(file);
    return (str);
}