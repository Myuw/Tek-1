/*
** EPITECH PROJECT, 2020
** cell_selection.c
** File description:
** functions selecting cell given a position on tha map
*/

#include <stdlib.h>
#include <string.h>
#include "strd.h"
#include "generator.h"

static bool are_avaliable_cells(pos_t *possibilities)
{
    for (int i = 0; i < 3; i++)
        if (possibilities[i].x != -1)
            return (true);
    return (false);
}

static pos_t *post_get_rand_cell(pos_t *possibilities)
{
    pos_t *result = NULL;

    if (!are_avaliable_cells(possibilities)) {
        free(possibilities);
        return (NULL);
    }
    else
        result = malloc(sizeof(pos_t));
    if (!result)
        exit(failure);
    do {
        *result = possibilities[rand() % (3 - 0 + 1) + 0];
    } while (result->x == -1 || result->y == -1);
    free(possibilities);
    return (result);
}

static pos_t *post_create_array(void)
{
    pos_t *result = malloc(sizeof(pos_t) * 4);

    if (!result)
        exit(failure);
    for (int i = 0; i < 4; i++) {
        result[i].x = -1;
        result[i].y = -1;
    }
    return (result);
}

pos_t *post_get_free_cell(pos_t *pos, map_t *map)
{
    pos_t *possibilities = post_create_array();

    if (pos->x + 2 < map->width && map->visited[pos->y][pos->x + 2] == '0') {
        possibilities[0].y = pos->y;
        possibilities[0].x = pos->x + 2;
    }
    if (pos->x - 2 >= 0 && map->visited[pos->y][pos->x - 2] == '0') {
        possibilities[1].y = pos->y;
        possibilities[1].x = pos->x - 2;
    }
    if (pos->y + 2 < map->height && map->visited[pos->y + 2][pos->x] == '0') {
        possibilities[2].y = pos->y + 2;
        possibilities[2].x = pos->x;
    }
    if (pos->y - 2 >= 0 && map->visited[pos->y - 2][pos->x] == '0') {
        possibilities[3].y = pos->y - 2;
        possibilities[3].x = pos->x;
    }
    return (post_get_rand_cell(possibilities));
}
