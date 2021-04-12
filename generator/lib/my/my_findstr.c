/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** find a str in another str
*/
#include "include/my.h"

char *find_the_string(int needle_len, char const *to_find, char *str)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[j]) {
            j++;
            if (j == needle_len) {
                i = i - needle_len + 1;
                return (&str[i]);
            }
        }
        else if (str[i] == to_find[0])
            j = 1;
        else
            j = 0;
    }
    return (0);
}

char *my_findstr(char *str, char const *to_find)
{
    int needle_len = 0;
    int haystack_len = 0;
    int j = 0;
    char *c;

    for (needle_len; to_find[needle_len] != '\0'; needle_len++);
    for (haystack_len; str[haystack_len] != '\0'; haystack_len++);
    if (to_find[0] == '\0')
        return (str);
    if (str == NULL)
        return (NULL);
    if (haystack_len < needle_len)
        return (NULL);
    c = find_the_string(needle_len, to_find, str);
    return (c);
}