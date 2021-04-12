/*
** EPITECH PROJECT, 2021
** library
** File description:
** str to array
*/
#include "include/my.h"

char **create_spe_array(char *av)
{
    char **array;
    int count = 0;

    for (int i = 0; av[i] != '\0'; i++) {
        if  (av[i] == ' ' || av[i] == '\t')
            count += 1;
    }
    array = malloc(sizeof(char *) * count + 1);
    if (array == NULL)
        return (NULL);
    return (array);
}

char **my_strtoarray(char *av)
{
    char **array = create_spe_array(av);
    int j = 0;
    int temp = 0;

    if (array == NULL)
        return (NULL);
    array[0] = malloc(sizeof(char) * my_strlen(av) + 1);
    for (int i = 0; av[i] != '\0'; i++) {
        if (av[i] == ' ' || av[i] == '\t') {
            array[j][temp] = '\0';
            temp = 0;
            j++;
            array[j] = malloc(sizeof(char) * my_strlen(av) + 1);
        } else {
            array[j][temp] = av[i];
            temp++;
        }
    }
    array[j + 1] = NULL;
    return (array);
}
