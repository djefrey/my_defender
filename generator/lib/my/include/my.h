/*
** EPITECH PROJECT, 2020
** my
** File description:
** my files
*/

#ifndef MY_H_
#define MY_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int my_printf(char *str, ...);
void d_and_i(int sized, va_list val);
void unsign(int sized, va_list val);
void octal(int sized, va_list val);
void binary(int sized, va_list val);
void hexa_up(int sized, va_list val);
void hexadecimal(int sized, va_list val);
void chara(int sized, va_list val);
void string(int sized, va_list val);
void string_oct(int sized, va_list val);
void pointer(int sized, va_list val);
void special_case(int biggest, int nb);
void d_and_i_sized(int size, va_list val);
void unsign_sized(int size, va_list val);
void octal_sized(int size, va_list val);
void binary_sized(int size, va_list val);
void hexadecimal_sized(int size, va_list val);
void hexa_up_sized(int size, va_list val);
int is_prefix(char *str, int i);
int my_pow(int nb, int p);
int my_sqrt(int nb);
int my_find_prime_sup(int nb);
int my_atoi(char const *str);
int my_is_prime(int nb);
int my_putnbr(int nb);
void my_putchar (char c);
int my_putnbr_base(int nbr, char const *base);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showstr(char *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_findstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
void special_case(int biggest, int nb);
int my_putarray(char * const *tab);
int write_line(char *str, int size);
char *find_the_string(int needle_len, char const *to_find, char *str);
char **my_strtoarray(char *av);
int is_prefix(char *str, int i);
char *open_file(char *filepath, struct stat *data);
int my_putarray(char * const *tab);
#endif /* !MY_H_ */
