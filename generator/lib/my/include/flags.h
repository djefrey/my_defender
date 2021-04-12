/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flags for the print_f
*/

#ifndef FLAGS
#define FLAGS
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

typedef void (*print_function_t)(int, va_list);

const print_function_t PRINT_NORMAL[] = {&d_and_i, &d_and_i, &unsign,
                                        &octal, &binary, &hexa_up, &hexadecimal,
                                        &chara, &string, &string_oct, &pointer};

const print_function_t PRINT_SIZED[] = {&d_and_i_sized, &d_and_i_sized,
                        &unsign_sized, &octal_sized, &binary_sized,
                        &hexa_up_sized, &hexadecimal_sized, &chara,
                        &string, &string_oct, &pointer};


#endif /* !FLAGS */
