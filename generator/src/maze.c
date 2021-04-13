/*
** EPITECH PROJECT, 2021
** generator
** File description:
** maze
*/

#include "generator.h"

void shuffle(int *directions)
{
    int temp = 0;
    int random = 0;

    for (int i = 0; i < 4; i++) {
        random = rand() % 4;
        temp = directions[i];
        directions[i] = directions[random];
        directions[random] = temp;
    }
}

void messed_up_maze(maze_t *info)
{
    int rand_x = rand() % info->width;
    int rand_y = rand() % info->height;

    for (int i = 0; i <= (info->width * info->height) / 10; i++) {
        info->maze[rand_y][rand_x] = '*';
        rand_x = rand() % info->width;
        rand_y = rand() % info->height;
    }
}

void print_maze(maze_t *maze)
{
    for (int y = 0; y < maze->height; y++) {
        write(1, maze->maze[y], maze->width);
        if (y != maze->height - 1)
            write(1, "\n", 1);
    }
}