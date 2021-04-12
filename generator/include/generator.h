/*
** EPITECH PROJECT, 2021
** generator
** File description:
** header file
*/

#ifndef GENERATOR_H_
#define GENERATOR_H_

#include "my.h"
#include <ctype.h>
#include <string.h>

typedef struct maze_s {
    int height;
    int width;
    int pos_x;
    int pos_y;
    char **maze;
} maze_t;

void print_maze(maze_t *maze);

#endif /* !GENERATOR_H_ */
