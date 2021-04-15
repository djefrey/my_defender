/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solver main
*/

#include <stdlib.h>
#include <stdio.h>
#include "solver.h"

int main(int ac, char **av)
{
    maze_t maze = {0, 0, NULL, 0};
    int ret = 0;

    if (ac != 2 || create_maze_from_file(&maze, av[1]))
        return (84);
    ret = solve_maze(&maze);
    if (ret) {
        solved_maze_set_path(&maze);
        solved_maze_print(&maze);
    } else
        printf("no solution found");
    for (int i = 0; i < maze.height; i++)
        free(maze.maze[i]);
    free(maze.maze);
    return (0);
}