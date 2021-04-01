/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solver
*/

#include <stdlib.h>
#include "solver.h"

int solve_maze(maze_t *maze)
{
    list_t *list = NULL;
    int size = 0;

    create_node(maze, &list, (vector_t) {0, 0}, 1);
    while ((size = my_list_size(list)) && !loop_nodes(maze, &list));
    return (size > 0);
}

int loop_nodes(maze_t *maze, list_t **nodes)
{
    list_t *next = NULL;
    list_t *new_nodes = NULL;
    node_t *node = NULL;

    for (list_t *list = *nodes; list; list = next) {
        next = list->next;
        node = (node_t*) list->data;
        if (analyse_node(maze, node, &new_nodes))
            return (1);
        free(node);
        free(list);
    }
    *nodes = new_nodes;
    return (0);
}

int analyse_node(maze_t *maze, node_t *node, list_t **new_nodes)
{
    int ret = 0;
    vector_t pos = node->pos;
    int dist = node->dist + 1;

    ret += create_node(maze, new_nodes,
    (vector_t) {pos.x, pos.y - 1}, dist);
    ret += create_node(maze, new_nodes,
    (vector_t) {pos.x - 1, pos.y}, dist);
    ret += create_node(maze, new_nodes,
    (vector_t) {pos.x + 1, pos.y}, dist);
    ret += create_node(maze, new_nodes,
    (vector_t) {pos.x, pos.y + 1}, dist);
    return (ret);
}

int create_node(maze_t *maze, list_t **new_nodes, vector_t pos, int dist)
{
    node_t *node = NULL;

    if (pos.x < 0 || pos.y < 0 || pos.x >= maze->width ||
    pos.y >= maze->height || maze->maze[pos.y][pos.x] != FREE_SPACE)
        return (0);
    maze->maze[pos.y][pos.x] = dist;
    if (pos.x == maze->width - 1 && pos.y == maze->height - 1)
        return (1);
    node = malloc(sizeof(node_t));
    node->pos = pos;
    node->dist = dist;
    create_list(new_nodes, node);
    return (0);
}