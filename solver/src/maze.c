/*
** EPITECH PROJECT, 2021
** dante
** File description:
** maze
*/

#include <stdlib.h>
#include <string.h>
#include "solver.h"

int create_maze_from_file(maze_t *maze, char *filepath)
{
    char *str = read_file(filepath);
    int ret = 0;

    if (!str)
        return (1);
    ret = create_maze_from_string(maze, str);
    free(str);
    return (ret);
}

int create_maze_from_string(maze_t *maze, char *str)
{
    if (set_maze_dimensions(maze, str) ||
    !(maze->maze = malloc(sizeof(char*) * maze->height)))
        return (1);
    for (int i = 0; i < maze->height; i++) {
        if (!(maze->maze[i] = malloc(sizeof(char) * maze->width)))
            return (1);
        strncpy(maze->maze[i], str + i * (maze->width + 1), maze->width);
    }
    return (0);
}

int set_maze_dimensions(maze_t *maze, char *str)
{
    int width = 0;
    int height = 0;
    int actual_width = 0;

    for (; *str; str++) {
        if (*str == '\n') {
            if (actual_width != width)
                return (1);
            height++;
            actual_width = 0;
            continue;
        }
        actual_width++;
        if (!height)
            width++;
    }
    maze->width = width;
    maze->height = height;
    return (0);
}