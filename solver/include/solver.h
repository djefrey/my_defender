/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solver main header
*/

#ifndef SOLVER_H_
#define SOLVER_H_

typedef struct maze_s {
    int width;
    int height;
    char **maze;
} maze_t;

int create_maze_from_file(maze_t *maze, char *filepath);
int create_maze_from_string(maze_t *maze, char *str);
int set_maze_dimensions(maze_t *maze, char *str);

char *read_file(char *filepath);

#endif /* !SOLVER_H_ */
