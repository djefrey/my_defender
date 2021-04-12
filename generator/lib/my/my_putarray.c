/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** display the content of an array
*/
#include "include/my.h"

int my_putarray(char * const *tab)
{
    int i;

    for (i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}