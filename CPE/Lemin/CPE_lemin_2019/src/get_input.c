/*
** EPITECH PROJECT, 2020
** get_input.c
** File description:
** get_input.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "libmy.h"
#include "liblist.h"

char *free_buffer(char *buffer)
{
    free(buffer);
    return NULL;
}

list_t *get_list(list_t *list)
{
    int size = 0;
    size_t count = 0;
    char *buffer = NULL;

    size = getline(&buffer, &count, stdin);
    if (size == -1) {
        free(buffer);
        list = setup_first_node(list, NULL);
        return list;
    }
    list = setup_first_node(list, my_strdup(buffer));
    buffer = free_buffer(buffer);
    while ((size = getline(&buffer, &count, stdin)) != -1)
    {
        list = add_node_end(list, my_strdup(buffer));
        buffer = free_buffer(buffer);
    }
    free(buffer);
    return list;
}