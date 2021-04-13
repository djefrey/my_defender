/*
** EPITECH PROJECT, 2021
** dante star
** File description:
** error handling of generator part
*/

#include "generator.h"

void free_everything(maze_t *info)
{
    for (int i = 0; i < info->height; i++)
        free(info->maze[i]);
    free(info->maze);
    free(info);
}

int input_error(char **av)
{
    int temp_a = 0;
    int temp_b = 0;

    if (my_str_isnum(av[1]) == 0 || my_str_isnum(av[2]) == 0)
        return (1);
    temp_a = atoi(av[1]);
    temp_b = atoi(av[2]);
    if (temp_a <= 0 || temp_b <= 0)
        return (1);
    return (0);

}

int error(int ac, char **av)
{
    if (ac >= 3 && ac < 5) {
        if (input_error(av))
            return (1);
        if (ac == 4 && strcmp(av[3], "perfect") != 0)
            return (1);
    } else
        return (1);
    return (0);
}