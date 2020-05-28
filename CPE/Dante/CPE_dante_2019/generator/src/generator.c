/*
** EPITECH PROJECT, 2020
** generator.c
** File description:
** generates mazes
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "strd.h"
#include "generator.h"

//debug
void post_print(pos_t *pos)
{
    printf("position: %i, %i\n", pos->x, pos->y);
}

//debug
void list_print(node_t *start)
{
    node_t *current = start;

    while (current->next) {
        post_print(current->pos);
        current = current->next;
    }
}

static pos_t *post_init_head(void)
{
    pos_t *result = malloc(sizeof(pos_t));

    if (!result)
        return (NULL);
    result->x = 0;
    result->y = 0;
    return (result);
}

static map_t *mapt_generate(pos_t *head, pos_t *tmp, node_t *start, map_t *map)
{
    while (!mapt_is_filled(map)) {
        tmp = post_get_free_cell(head, map);
        if (!tmp) {
            tmp = list_trackback(start);
            *head = *tmp;
            continue;
        }
        list_append(start, tmp);
        mapt_trace(head, tmp, map);
        map->visited[tmp->y][tmp->x] = '1';
        *head = *tmp;
        free(tmp);
    }
    return (map);
}

static map_t *mapt_make_unperfect(map_t *map)
{
    memset(map->buffer[map->height / 2], '*', map->width);
    return (map);
}

int generate(unsigned x, unsigned y, bool perfect)
{
    pos_t *head = post_init_head();
    pos_t *tmp = NULL;
    node_t *start = list_init(head);
    map_t *map = mapt_create_empty(x, y);

    if (!map || !start || !head)
        return (1);
    if (!perfect)
        mapt_make_unperfect(map);
    srand(time(0));
    mapt_generate(head, tmp, start, map);
    mapt_print(map);
    list_destroy(start);
    free(head);
    mapt_destroy(map);
    return (0);
}
