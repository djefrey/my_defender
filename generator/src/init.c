/*
** EPITECH PROJECT, 2021
** dante star
** File description:
** init everything
*/

#include "generator.h"

void fill_empty_line(char *line, char character, int size)
{
    for (int i = 0; i < size; i++) {
        line[i] = character;
    }
}

int create_maze(maze_t *info)
{
    if (!(info->maze = malloc(sizeof(char*) * (info->height))))
        return (1);
    for (int i = 0; i < info->height; i++) {
        info->maze[i] = malloc(sizeof(char) * (info->width));
        if (!info->maze[i])
            return (1);
        fill_empty_line(info->maze[i], '*', info->width);
    }
    return (0);
}

int init_grid(maze_t *info)
{
    if (create_maze(info))
        return (1);
    for (int y = 0; y < info->height; y++) {
        if (y % 2 == 0) {
            for (int x = 0; x < info->width; x++) {
                info->maze[y][x] = (x % 2 == 0) ? '*' : 'X';
            }
        } else
            fill_empty_line(info->maze[y], 'X', info->width);
    }
    return (0);
}
