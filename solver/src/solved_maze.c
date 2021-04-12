/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solved maze
*/

#include <stdio.h>
#include "solver.h"

void solved_maze_set_path(maze_t *maze)
{
    int x = maze->width - 1;
    int y = maze->height - 1;
    int dist;

    do {
        dist = maze->maze[y][x];
        maze->maze[y][x] = PATH;
        solved_maze_next_pos(maze, &x, &y, dist);
    } while (dist > 0);
}

void solved_maze_next_pos(maze_t *maze, int *x, int *y, int dist)
{
    for (int i = -1; i <= 1; i += 2) {
        if (*x + i >= 0 && *x + i < maze->width &&
        maze->maze[*y][*x + i] == dist - 1) {
            *x += i;
            return;
        } else if (*y + i >= 0 && *y + i < maze->height &&
        maze->maze[*y + i][*x] == dist - 1) {
            *y += i;
            return;
        }
    }
}

void solved_maze_print(maze_t *maze)
{
    for (int y = 0; y < maze->height; y++) {
        for (int x = 0; x < maze->width; x++) {
            if (maze->maze[y][x] == PATH)
                printf("o");
            else if (maze->maze[y][x] == WALL)
                printf("X");
            else
                printf("*");
        }
        if (y < maze->height - 1)
            printf("\n");
    }
}