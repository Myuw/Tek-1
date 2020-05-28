/*
** EPITECH PROJECT, 2020
** move_in_maze
** File description:
** dante
*/

#include "solver.h"

char **move_in_maze(map_t *map, max_t *max)
{
    if (map->x == 0) {
        map = no_up(map, max);
        return (map);
    }
    if (map->x == max->max_x) {
        map = no_down(map, max);
        return (map);
    }
    if (map->y == 0) {
        map = no_left(map, max);
        return (map);
    }
    if (map->y == max->max_y) {
        map = no_right(map, max);
        return (map);
    }
    map = all_direction(map);
    return (map);
}