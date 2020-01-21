/*
** EPITECH PROJECT, 2019
** my_c
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

void my_sa(head_t *list, link_t *link)
{
    link_t *tmp = list->first->next;

    list->first->next = list->first->next->next;
    tmp->next = list->first;
    list->first = tmp;
    if (check_list(list, link) == 1)
        my_putstr("sa ");
    else
        my_putstr("sa");
}
