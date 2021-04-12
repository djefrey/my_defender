/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** function print_f
*/
#include "include/my.h"
#include "include/flags.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int flags(char *str, int i, va_list val)
{
    int size = 0;
    int j = 0;
    int nb = is_prefix(str, i);
    char *all_flags = "diuobXxcsSp";

    i = (nb != 0 && nb != 3 && nb != 5) ? i + 1 : i;
    i = (nb == 3 || nb == 5) ? i + 2 : i;
    nb = nb == 4 ? 3 : nb;
    nb = nb == 5 ? 0 : nb;
    for (j; str[i] != all_flags[j] && all_flags[j] != '\0'; j++);
    if (all_flags[j] == '\0') {
        write (2, "Unknown flags\n", 15);
        return (84);
    }
    if (nb == 0) {
        (*PRINT_NORMAL[j])(nb, val);
    } else {
        (*PRINT_SIZED[j])(nb, val);
    }
    return (i);
}

int my_printf(char *str, ...)
{
    va_list val;
    int nbr = 0;
    int i = 0;

    va_start(val, str);
    for (i; str[i] != '\0'; i++) {
        if (str[i] == '%' && str[i + 1] == '%') {
            my_putchar('%');
            i += 2;
        } else if (str[i] == '%' && str[i + 1] != '%') {
            i = flags(str, i + 1, val);
        } else
            my_putchar(str[i]);
    }
    va_end(val);
    return (0);
}