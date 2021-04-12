/*
** EPITECH PROJECT, 2020
** flags_part_num_sized
** File description:
** flags part num but with special size
*/
#include "include/my.h"

void d_and_i_sized(int size, va_list val)
{
    if (size == 1)
        my_putnbr((short)va_arg(val, int));
    if (size == 2)
        my_putnbr(va_arg(val, long));
    if (size == 3)
        my_putnbr(va_arg(val, long long));
}

void unsign_sized(int size, va_list val)
{
    int tmp = 0;

    if (size == 1) {
        tmp = ((short)va_arg(val, int));
        if (tmp < 0)
            tmp = tmp *-1;
        my_putnbr(tmp);
    }
    if (size == 2) {
        tmp = (va_arg(val, long));
        if (tmp < 0)
            tmp = tmp *-1;
        my_putnbr(tmp);
    }
    if (size == 3) {
        tmp = (va_arg(val, long long));
        if (tmp < 0)
            tmp = tmp *-1;
        my_putnbr(tmp);
    }
}

void octal_sized(int size, va_list val)
{
    if (size == 1)
        my_putnbr_base((short)va_arg(val, int), "01234567");
    if (size == 2)
        my_putnbr_base(va_arg(val, long), "01234567");
    if (size == 3)
        my_putnbr_base(va_arg(val, long long), "01234567");
}

void binary_sized(int size, va_list val)
{
    if (size == 1)
        my_putnbr_base((short)va_arg(val, int), "01");
    if (size == 2)
        my_putnbr_base(va_arg(val, long), "01");
    if (size == 3)
        my_putnbr_base(va_arg(val, long long), "01");
}

void hexadecimal_sized(int size, va_list val)
{
    if (size == 1)
        my_putnbr_base((short)va_arg(val, int), "0123456789abcdef");
    if (size == 2)
        my_putnbr_base(va_arg(val, long), "0123456789abcdef");
    if (size == 3)
        my_putnbr_base(va_arg(val, long long), "0123456789abcdef");
}