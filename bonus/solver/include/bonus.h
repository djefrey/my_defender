/*
** EPITECH PROJECT, 2021
** solver
** File description:
** bonus
*/

#ifndef BONUS_H_
#define BONUS_H_

void solver(maze_t *maze);

void create_ppm(maze_t *maze);
void write_maze_ppm(int fd, maze_t *maze);
void write_color(int fd, int value, int max_dist);
void write_color_from_dist(int fd, int dist, int max_dist);

#endif /* !BONUS_H_ */
