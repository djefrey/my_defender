/*
** EPITECH PROJECT, 2020
** my_showstr.c
** File description:
** print a string, replacee non-print charach with hexadecimal code
*/
#include "include/my.h"

int my_showstr(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (my_str_isprintable(str[i]) == 1) {
            my_putchar(str[i]);
        }
        else
        {
            my_putchar ('\\');
            if (str[i] <= 15)
            {
                my_putchar ('0');
            }
            my_putnbr_base(str[i], "012345689abcdef");
        }
    }
}
