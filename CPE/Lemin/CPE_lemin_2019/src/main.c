/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include <stdlib.h>
#include "lemin.h"
#include "libmy.h"

int my_str_had_dash(char *node)
{
    for (int i = 0; node[i] != '\0'; i++) {
        if (node[i] == '-')
            return (1);
    }
    return (0);
}

void print_end(node_t *node)
{
    my_putstr(node->data);
    my_putstr("#moves\n");
}

void display_list(list_t *list)
{
    node_t *node = list->head;
    int i = 0;

    my_putstr("#number_of_ants\n");
    for (int j = 0; node->next; j++)
    {
        if (i == 0 && my_str_had_dash(node->data) == 1) {
            my_putstr("#tunnels\n");
            i++;
        }
        if (j == 1)
            my_putstr("#rooms\n");
        if (node->display == 0) {
            my_putstr(node->data);
            node = node->next;
        } else
            node = node->next;
    }
    print_end(node);
}

int main(int ac, char **av)
{
    list_t *list = malloc(sizeof(list_t));

    (void)av;
    if (ac != 1 || list == NULL)
        return 84;
    list = get_list(list);
    if (error_handling(list) == -1) {
        free_list(list);
        return (84);
    }
    display_list(list);
    free_list(list);
    return 0;
}