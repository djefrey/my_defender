/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solver main header
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include "my_list.h"

#define PATH -2
#define WALL -1
#define FREE_SPACE 0

typedef struct vector_s {
    int x;
    int y;
} vector_t;

typedef struct maze_s {
    int width;
    int height;
    int **maze;
    int dist;
} maze_t;

typedef struct node_s {
    vector_t pos;
    int dist;
} node_t;

int create_maze_from_file(maze_t *maze, char *filepath);
int create_maze_from_string(maze_t *maze, char *str);
int set_maze_dimensions(maze_t *maze, char *str);

int solve_maze(maze_t *maze);
int loop_nodes(maze_t *maze, list_t **nodes);
int analyse_node(maze_t *maze, node_t *node, list_t **new_nodes);
int create_node(maze_t *maze, list_t **new_nodes, vector_t pos, int dist);

void solved_maze_set_path(maze_t *maze);
void solved_maze_next_pos(maze_t *maze, int *x, int *y, int dist);
void solved_maze_print(maze_t *maze);

char *read_file(char *filepath);

#endif /* !SOLVER_H_ */
