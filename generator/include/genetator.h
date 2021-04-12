/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** header file
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_
#include "my.h"
#include <ctype.h>
#include <string.h>

typedef struct maze_info {
    int height;
    int width;
    int pos_x;
    int pos_y;
    char **maze;
} maze;

#endif /* !MATCHSTICK_H_ */
