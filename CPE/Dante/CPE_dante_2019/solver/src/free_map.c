/*
** EPITECH PROJECT, 2020
** free_map
** File description:
** dante
*/

#include "solver.h"
#include <stdlib.h>

void free_map(map_t *map, max_t *max)
{
    for (int i = 0; map->map[i]; i++)
        free(map->map[i]);
    free(map->map);
    free(map);
    free(max);
}