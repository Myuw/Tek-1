/*
** EPITECH PROJECT, 2020
** map.c
** File description:
** functions acting on map structure
*/

#include <stdio.h>
#include <stdlib.h>
#include "strd.h"
#include "generator.h"

void mapt_print(map_t *map)
{
    for (int i = 0; map->buffer[i]; i++)
        puts(map->buffer[i]);
}

static bool mapt_is_line_unvisited(char *line)
{
    for (int j = 0; line[j] != '\0'; j++) {
        if (j % 2 == 0 && line[j] == '0')
            return (false);
    }
    return (true);
}

bool mapt_is_filled(map_t *map)
{
    for (int i = 0; map->visited[i]; i++) {
        if (!mapt_is_line_unvisited(map->visited[i]))
            return (false);
    }
    return (true);
}

map_t *mapt_trace(pos_t *pos1, pos_t *pos2, map_t *map)
{
    if (pos2->x > pos1->x) {
        map->buffer[pos1->y][pos1->x + 1] = '*';
        map->buffer[pos1->y][pos1->x + 2] = '*';
    }
    if (pos2->y > pos1->y) {
        map->buffer[pos1->y + 1][pos1->x] = '*';
        map->buffer[pos1->y + 2][pos1->x] = '*';
    }
    if (pos2->x < pos1->x) {
        map->buffer[pos1->y][pos1->x - 1] = '*';
        map->buffer[pos1->y][pos1->x - 2] = '*';
    }
    if (pos2->y < pos1->y) {
        map->buffer[pos1->y - 1][pos1->x] = '*';
        map->buffer[pos1->y - 2][pos1->x] = '*';
    }
    return (map);
}

void mapt_destroy(map_t *map)
{
    for (int i = 0; map->buffer[i]; i++) {
        free(map->buffer[i]);
    }
    for (int i = 0; map->visited[i]; i++) {
        free(map->visited[i]);
    }
    free(map->buffer);
    free(map->visited);
    free(map);
}
