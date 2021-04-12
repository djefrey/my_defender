/*
** EPITECH PROJECT, 2021
** dante star
** File description:
** generator main file
*/
#include "genetator.h"

void fill_empty_line(char *line, char character, int size)
{
    for (int i = 0; i < size; i++) {
        line[i] = character;
    }
}

int create_maze (maze *info)
{
    int count = 0;

    if ((info->maze = malloc(sizeof(char *) * (info->height + 1))) == NULL)
        return (1);
    for (count = 0; count < info->height; count++) {
        info->maze[count] = malloc(sizeof(char) * (info->width + 1));
        if (info->maze[count] == NULL)
            return (1);
    }
    info->maze[count] = NULL;
    for (int i = 0; i < info->height; i++) {
        fill_empty_line(info->maze[i], '*', info->width);
        info->maze[info->width] = '\0';
    }
    return (0);
}

int init_grid(maze *info)
{
    if (create_maze(info))
        return (1);
    for (int i = 0; i <= info->height; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j <= info->width; j++)
                info->maze[i][j] = (j % 2 == 0) ? '*' : 'X';
        } else
            fill_empty_line(info->maze[i], 'X', info->width);
    }
    return (0);
}

int generator(int ac, char **av)
{
    maze *info = NULL;

    if (error(ac, av))
        return (84);
    info = malloc(sizeof(maze));
    if (info == NULL)
        return (84);
    info->width = atoi(av[1]);
    info->height = atoi (av[2]);
    if (init_grid(info))
        return (84);
    my_putarray(info->maze);
    return (0);
}