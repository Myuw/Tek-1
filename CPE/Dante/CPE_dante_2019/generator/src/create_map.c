/*
** EPITECH PROJECT, 2020
** map.c
** File description:
** map stuff
*/

#include <stdlib.h>
#include <string.h>
#include "strd.h"
#include "generator.h"

static char **create_empty_map(unsigned x, unsigned y, char c)
{
    unsigned i = 0;
    char **map = malloc(sizeof(char *) * (y + 1));

    if (!map)
        return (NULL);
    for (; i < y; i++) {
        map[i] = malloc(sizeof(char) * (x + 1));
        if (!map[i])
            return (NULL);
        memset(map[i], c, x);
        map[i][x] = '\0';
    }
    map[i] = NULL;
    return (map);
}

static char **make_visited(char **visited)
{
    if (!visited)
        return (NULL);
    for (int i = 0; visited[i]; i++) {
        for (int j = 0; i % 2 == 0 && visited[i][j] != '\0'; j += 2) {
            visited[i][j] = '0';
        }
    }
    return (visited);
}

static char **make_map(char **map)
{
    if (!map)
        return (NULL);
    map[0][0] = '*';
    return (map);
}

static void make_map_exit(map_t *map)
{
    map->buffer[map->height - 1][map->width - 1] = '*';
    if (map->width % 2 == 0 && map->height % 2 == 0)
        map->buffer[map->height - 2][map->width - 1] = '*';
}

map_t *mapt_create_empty(unsigned x, unsigned y)
{
    map_t *result = malloc(sizeof(map_t));

    if (!result)
        return (NULL);
    result->buffer = make_map(create_empty_map(x, y, 'X'));
    result->visited = make_visited(create_empty_map(x, y, ' '));
    if (!result->visited || !result->buffer)
        return (NULL);
    result->width = x;
    result->height = y;
    make_map_exit(result);
    result->visited[0][0] = '1';
    return (result);
}
