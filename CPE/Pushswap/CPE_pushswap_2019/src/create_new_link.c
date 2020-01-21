/*
** EPITECH PROJECT, 2019
** create_new_link
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

link_t *create_new_link(int i)
{
    link_t *link;

    link = malloc(sizeof(*link));
    if (link == NULL)
        return (NULL);
    link->data = i;
    link->prev = NULL;
    link->next = NULL;
    return (link);
}

head_t *create_list(int ac, char **av)
{
    head_t *head = NULL;
    link_t *link = NULL;
    link_t *tmp = NULL;

    head = malloc(sizeof(*head));
    if (head == NULL)
        return (NULL);
    link = create_new_link(my_getnbr(av[1]));
    head->first = link;
    for (int i = 2; i < ac; i++) {
        tmp = create_new_link(my_getnbr(av[i]));
        head->len = ac - 1;
        tmp->prev = link;
        link->next = tmp;
        link = link->next;
    }
    head->last = link;
    return (head);
}
