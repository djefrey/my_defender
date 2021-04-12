/*
** EPITECH PROJECT, 2020
** print_f
** File description:
** part letter flags
*/
#include "include/my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void chara(int sized, va_list val)
{
    my_putchar(va_arg(val, int));
}

void string(int sized, va_list val)
{
    my_putstr(va_arg(val, char *));
}

void string_oct(int sized, va_list val)
{
    char *str = va_arg(val, char *);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            my_putnbr_base(str[i], "01234567");
        } else
            my_putchar(str[i]);
    }
}

void pointer(int sized, va_list val)
{
    long pointer = (long)va_arg(val, void *);

    if (pointer < 0)
        pointer = pointer * -1;
    my_putnbr_base(pointer, "0123456789abcdef");
}

void binary(int sized, va_list val)
{
    my_putnbr_base(va_arg(val, int), "01");
}