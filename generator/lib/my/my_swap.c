/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swap two integers
*/
#include "include/my.h"

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}