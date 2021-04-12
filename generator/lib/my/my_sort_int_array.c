/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** sort int in ascending order
*/
#include "include/my.h"

void my_sort_int_array(int *array, int size)
{
    int i;
    int j;
    int min_nbr;

    for (i = 0; i < size - 1; i++) {
        min_nbr = i;
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min_nbr])
                min_nbr = j;
        }
        my_swap(&array[min_nbr], &array[i]);
    }
}