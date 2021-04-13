/*
** EPITECH PROJECT, 2021
** dante star
** File description:
** generator main file
*/

#include "generator.h"

int blocked_hole (maze_t *info)
{
    if (info->maze[info->height - 2][info->width -1] == 'X') {
        if (info->maze[info->height - 1][info->width - 2] == 'X')
            return (1);
    }
    return (0);
}

void patch_maze(maze_t *info)
{
    int coin = rand() % 2;

    if (info->maze[info->height - 1][info->width - 1] == 'X') {
        info->maze[info->height - 1][info->width - 1] = '*';
        if (blocked_hole(info)) {
            info->maze[info->height - 2][info->width -1] = coin == 1 ? '*' : 'X';
            info->maze[info->height - 1][info->width - 2] = coin == 1 ? 'X' : '*';
        }

    }
    for (int i = 0; i < info->height; i++) {
        for (int j = 0; j < info->width; j++) {
            info->maze[i][j] = info->maze[i][j] == 'v' ? '*' : info->maze[i][j];
        }
    }
}

int is_next_case_correct(int pos_x, int pos_y, maze_t *info)
{
    if (pos_x < 0 || pos_y < 0)
        return (0);
    if (pos_x >= info->width || pos_y >= info->height)
        return (0);
    if (info->maze[pos_y][pos_x] == 'v')
        return (0);
    return (1);
}

void deplacinator(int curr_y, int curr_x, maze_t *info)
{
    int directions[] = {NORTH, SOUTH, EST, WEST};
    int shift[4][2] = {{-2, 0}, {2, 0}, {0, 2}, {0, -2}};
    int next_x = 0;
    int next_y = 0;

    shuffle(directions);
    for (int i = 0; i < 4; i++) {
        next_y = curr_y + shift[directions[i]][0];
        next_x = curr_x + shift[directions[i]][1];
        if (is_next_case_correct(next_x, next_y, info)) {
            info->maze[curr_y][curr_x] = 'v';
            info->maze[next_y][next_x] = 'v';
            info->maze[(curr_y + next_y) / 2][(curr_x + next_x) / 2] = 'v';
            deplacinator(next_y, next_x, info);
        }
    }
}

int generator(int ac, char **av)
{
    maze_t *info = NULL;

    srand(time(NULL));
    if (error(ac, av) || !(info = malloc(sizeof(maze_t))))
        return (84);
    info->width = atoi(av[1]);
    info->height = atoi (av[2]);
    if (init_grid(info))
        return (84);
    deplacinator(0, 0, info);
    patch_maze(info);
    if (ac == 3)
        messed_up_maze(info);
    print_maze(info);
    free_everything(info);
    return (0);
}