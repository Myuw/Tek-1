/*
** EPITECH PROJECT, 2020
** del_node.c
** File description:
** del_node.c
*/

#include <stdlib.h>
#include "liblist.h"

list_t *free_first_node(list_t *list)
{
    node_t *tmp = list->head;

    list->head = list->head->next;
    free(tmp->data);
    free(tmp);
    return (list);
}

list_t *free_last_node(list_t *list)
{
    node_t *tmp = list->tail;

    list->tail = list->tail->prev;
    free(tmp->data);
    free(tmp);
    return (list);
}

void free_list(list_t *list)
{
    while (list->tail->prev)
        free_last_node(list);
    free_first_node(list);
    free(list);
}