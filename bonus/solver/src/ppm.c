/*
** EPITECH PROJECT, 2021
** solver
** File description:
** ppm
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "solver.h"
#include "bonus.h"

void create_ppm(maze_t *maze)
{
    int fd = open("./maze.ppm", O_WRONLY | O_CREAT, 0644);

    if (fd == -1)
        return;
    dprintf(fd, "P3\n%i %i\n255\n#Maze\n", maze->width, maze->height);
    write_maze_ppm(fd, maze);
    close(fd);
}

void write_maze_ppm(int fd, maze_t *maze)
{
    int value = 0;

    for (int y = 0; y < maze->height; y++) {
        for (int x = 0; x < maze->width; x++) {
            value = maze->maze[y][x];
            write_color(fd, value, maze->dist);
        }
    }
}

void write_color(int fd, int value, int max_dist)
{
    switch (value) {
        case PATH:
            dprintf(fd, "127 127 127\n");
            break;
        case WALL:
            dprintf(fd, "0 0 0\n");
            break;
        case FREE_SPACE:
            dprintf(fd, "255 255 255\n");
            break;
        default:
            write_color_from_dist(fd, value, max_dist);
            break;
    }
}

void write_color_from_dist(int fd,  int dist, int max_dist)
{
    unsigned int blue = (unsigned char) ceil(255 * ((float) dist / max_dist));
    unsigned int red = 255 - blue;

    dprintf(fd, "%i 0 %i\n", red, blue);
}