/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** part 2 num sized
*/
#include "include/my.h"

void hexa_up_sized(int size, va_list val)
{
    if (size == 1)
        my_putnbr_base((short)va_arg(val, int), "0123456789ABCDEF");
    if (size == 2)
        my_putnbr_base(va_arg(val, long), "0123456789ABCDEF");
    if (size == 3)
        my_putnbr_base(va_arg(val, long long), "0123456789ABCDEF");
}