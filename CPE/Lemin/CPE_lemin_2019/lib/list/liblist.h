/*
** EPITECH PROJECT, 2020
** liblist.h
** File description:
** liblist.h
*/

#ifndef LIBLIST
#define LIBLIST

typedef struct node_s node_t;
struct node_s
{
    int display;
    int counter;
    char *data;
    node_t *prev;
    node_t *next;
};

typedef struct list_s
{
    node_t *head;
    node_t *tail;
} list_t;

void free_list(list_t *list);

list_t *setup_first_node(list_t *list, char *data);
list_t *add_node_beg(list_t *list, char *data);
list_t *add_node_end(list_t *list, char *data);
list_t *free_first_node(list_t *list);
list_t *free_last_node(list_t *list);

#endif /* LIBLIST */