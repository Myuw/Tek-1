/*
** EPITECH PROJECT, 2020
** add_node.c
** File description:
** add_node.c
*/

#include <stdlib.h>
#include "liblist.h"

list_t *setup_first_node(list_t *list, char *data)
{
    node_t *new_node = malloc(sizeof(node_t));

    if (new_node == NULL)
        return (NULL);
    new_node->data = data;
    new_node->counter = 0;
    new_node->display = 0;
    new_node->prev = NULL;
    new_node->next = NULL;
    list->head = new_node;
    list->tail = new_node;
    return (list);
}

list_t *add_node_beg(list_t *list, char *data)
{
    node_t *new_node = malloc(sizeof(node_t));

    if (new_node == NULL)
        return (NULL);
    new_node->data = data;
    new_node->display = 0;
    new_node->prev = NULL;
    new_node->next = list->head;
    list->head->prev = new_node;
    list->head = new_node;
    return (list);
}

list_t *add_node_end(list_t *list, char *data)
{
    static int counter = 1;
    node_t *new_node = malloc(sizeof(node_t));

    if (new_node == NULL)
        return (NULL);
    new_node->data = data;
    new_node->display = 0;
    new_node->counter = counter;
    new_node->prev = list->tail;
    new_node->next = NULL;
    list->tail->next = new_node;
    list->tail = new_node;
    counter++;
    return (list);
}