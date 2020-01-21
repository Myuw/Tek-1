/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

void pushswap(head_t *list_a, link_t *link)
{
    int i = 0;

    link = list_a->first;
    while (check_list(list_a, link) == 1) {
        for (; list_a->first->data <= list_a->first->next->data; i++)
            my_ra(list_a, link);
        if (list_a->first->data > list_a->first->next->data)
            my_sa(list_a, link);
        for (; i > 0; i--)
            my_rra(list_a, link);
    }
}
