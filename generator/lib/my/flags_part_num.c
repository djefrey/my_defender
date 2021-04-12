/*
** EPITECH PROJECT, 2020
** flags_part_num
** File description:
** flags for the numbers part
*/
#include "include/my.h"

void d_and_i(int sized, va_list val)
{
    my_putnbr(va_arg(val, int));
}

void unsign(int sized, va_list val)
{
    int tmp = va_arg(val, int);

    if (tmp < 0)
        tmp = tmp *-1;
    my_putnbr(tmp);
}

void octal(int sized, va_list val)
{
    my_putnbr_base(va_arg(val, int), "01234567");
}

void hexa_up(int sized, va_list val)
{
    my_putnbr_base(va_arg(val, int), "0123456789ABCDEF");
}

void hexadecimal(int sized, va_list val)
{
    my_putnbr_base(va_arg(val, int), "0123456789abcdef");
}