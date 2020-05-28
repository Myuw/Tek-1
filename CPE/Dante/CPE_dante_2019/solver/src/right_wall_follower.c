/*
** EPITECH PROJECT, 2020
** right_wall_follower
** File description:
** dante
*/

#include "solver.h"
#include <stdio.h>
#include <stdlib.h>

int find_max_x(char **map)
{
    int max_x = 0;

    for (; map[max_x]; max_x++);
    return (max_x - 1);
}

int find_max_y(char **map, int max_x)
{
    int max_y = 0;

    for (; map[max_x][max_y] != '\0'; max_y++);
    return (max_y - 1);
}

void right_wall_follower(char *buffer)
{
    map_t *map = malloc(sizeof(map_t));
    max_t *max = malloc(sizeof(max_t));

    if (map == NULL || max == NULL)
        return ;
    map->map = strtab(buffer, '\n');
    max->max_x = find_max_x(map->map);
    max->max_y = find_max_y(map->map, max->max_x);
    if (check_in_out(map->map) == -1) {
        printf("no solution found");
        return ;
    }
    for (int x = 0; map->map[x]; x++)
    for (int y = 0; map->map[x][y] != '\0'; y++)
        if (map->map[x][y] == '*')
            map->map[x][y] = 'o';
    print_map(map->map);
    free_map(map, max);
}