/*
** EPITECH PROJECT, 2021
** generator
** File description:
** maze
*/

#include "generator.h"

void print_maze(maze_t *maze)
{
    for (int y = 0; y < maze->height; y++) {
        write(1, maze->maze[y], maze->width);
        write(1, "\n", 1);
    }
}