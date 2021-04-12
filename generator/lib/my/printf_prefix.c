/*
** EPITECH PROJECT, 2021
** printf
** File description:
** libraryprefix
*/

int is_prefix(char *str, int i)
{
    int size = 0;

    size = str[i] == 'l' ? 2 : size;
    size = str[i] == 'h' ? 1 : size;
    size = str[i] == 'j' ? 4 : size;
    size = str[i] == 'l' && str[i + 1] == 'l' ? 3 : size;
    size = str[i] == 'h' && str[i + 1] == 'h' ? 5 : size;
    return (size);
}