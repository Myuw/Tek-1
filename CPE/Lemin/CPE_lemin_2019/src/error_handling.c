/*
** EPITECH PROJECT, 2020
** error_handling
** File description:
** lemin
*/

#include "libmy.h"
#include "lemin.h"
#include "liblist.h"
#include <stddef.h>
#include <stdlib.h>

char *strcpy_lemin(char *node)
{
    int i = 0;
    char *result = malloc(sizeof(char) * (my_strlen(node) + 2));

    if (result == NULL)
        return (NULL);
    for (i = 0; node[i] != '\0'; i++) {
        if (node[i] == '#') {
            result[i] = '\n';
            result[i + 1] = '\0';
            free(node);
            return (result);
        }
        result[i] = node[i];
    }
    result[i] = '\n';
    result[i + 1] = '\0';
    free(node);
    return result;
}

int check_line(node_t *node)
{
    if (node->data[0] == '#' && node->data[1] != '#') {
        node->display = -1;
        return (0);
    }
    for (int i = 0; node->data[i] != '\0'; i++) {
        if (node->data[i] == '#') {
            if (my_strcmp(node->data, "##start\n") == 0)
                return (0);
            if (my_strcmp(node->data, "##end\n") == 0)
                return (0);
            node->data = strcpy_lemin(node->data);
            return (0);
        }
        if (my_str_is_letter(node->data[i]) == -1)
            return (-1);
    }
    return (0);
}

void free_node(int counter, list_t *list)
{
    while (counter != list->tail->counter)
        free_last_node(list);
    free_last_node(list);
}

int error_handling(list_t *list)
{
    node_t *node = NULL;

    node = list->head;
    if (node->data == NULL || check_line(list->head) == -1)
        return (-1);
    while (node->next) {
        if (check_line(node) == -1) {
            free_node(node->counter, list);
            return (0);
        }
        node = node->next;
    }
    if (check_line(node) == -1) {
        free_node(node->counter, list);
        return (0);
    }
    return (0);
}