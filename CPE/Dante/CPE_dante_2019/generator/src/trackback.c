/*
** EPITECH PROJECT, 2020
** trackback.c
** File description:
** trackback mechanic
*/

#include <stdlib.h>
#include "strd.h"
#include "generator.h"

static pos_t *post_copy(pos_t *pos)
{
    pos_t *result = malloc(sizeof(pos_t));

    result->x = pos->x;
    result->y = pos->y;
    return (result);
}

node_t *list_init(pos_t *pos)
{
    node_t *result = malloc(sizeof(node_t));

    if (!result)
        return (NULL);
    result->pos = post_copy(pos);
    result->next = NULL;
    result->prev = NULL;
    return (result);
}

void list_append(node_t *start, pos_t *pos)
{
    node_t *new = malloc(sizeof(node_t));
    node_t *current = start;

    while (current->next)
        current = current->next;
    new->pos = post_copy(pos);
    new->next = NULL;
    new->prev = current;
    current->next = new;
}

pos_t *list_trackback(node_t *start)
{
    node_t *current = start;
    node_t *tmp = NULL;

    while (current->next)
        current = current->next;
    tmp = current;
    current = current->prev;
    current->next = NULL;
    free(tmp->pos);
    free(tmp);
    return (current->pos);
}

void list_destroy(node_t *start)
{
    node_t *current = start;
    node_t *tmp = NULL;

    while (current->next) {
        tmp = current;
        current = current->next;
        free(tmp->pos);
        free(tmp);
    }
    free(current->pos);
    free(current);
}
