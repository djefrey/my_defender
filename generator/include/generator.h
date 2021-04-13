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
void fill_empty_line(char *line, char character, int size);
int create_maze(maze_t *info);
int init_grid(maze_t *info);
int generator(int ac, char **av);
int error(int ac, char **av);

#define NORTH 0
#define SOUTH 1
#define EST 2
#define WEST 3

#endif /* !GENERATOR_H_ */
