/*
** EPITECH PROJECT, 2019
** my_rr
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

void my_rra(head_t *list, link_t *link)
{
    link_t *tmp;
    link_t *tmp2;

    tmp = list->first;
    while (list->first->next->next)
        list->first = list->first->next;
    tmp2 = list->first->next;
    list->first->next = NULL;
    list->first = tmp;
    tmp2->next = list->first;
    list->first = tmp2;
    if (check_list(list, link) == 1)
        my_putstr("rra ");
    else
        my_putstr("rra");
}
