/*
** EPITECH PROJECT, 2019
** check_list
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

int check_list(head_t *list_a, link_t *link)
{
    link = list_a->first;
    for (; link->next; link = link->next)
        if (link->data > link->next->data)
            return (1);
    return (0);
}
