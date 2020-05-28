/*
** EPITECH PROJECT, 2020
** move
** File description:
** dante
*/

#include "solver.h"

map_t *up(map_t *map)
{
    map->map[map->x - 1][map->y] = 'o';
    map->x = map->x - 1;
    return (map);
}

map_t *right(map_t *map)
{
    map->map[map->x][map->y + 1] = 'o';
    map->y = map->y + 1;
    return (map);
}

map_t *down(map_t *map)
{
    map->map[map->x + 1][map->y] = 'o';
    map->x = map->x + 1;
    return (map);
}

map_t *left(map_t *map)
{
    map->map[map->x][map->y - 1] = 'o';
    map->y = map->y - 1;
    return (map);
}