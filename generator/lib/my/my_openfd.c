/*
** EPITECH PROJECT, 2021
** library
** File description:
** open a file and read it
*/
#include "include/my.h"

char *open_file(char *filepath, struct stat *data)
{
    char *file = NULL;
    struct stat temp;
    int fd = 0;

    if ((fd = open(filepath, O_RDONLY)) == -1)
        return (NULL);
    fstat(fd, &temp);
    *data = temp;
    if ((file = malloc(sizeof(char) * (temp.st_size + 1))) == NULL)
        return (NULL);
    if (read(fd, file, temp.st_size) == -1)
        return (NULL);
    file[temp.st_size] = '\0';
    return (file);
}

