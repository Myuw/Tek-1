/*
** EPITECH PROJECT, 2019
** my_r
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

void my_ra(head_t *list, link_t *link)
{
    link_t *tmp;
    link_t *tmp2;

    tmp = list->first;
    list->first = list->first->next;
    tmp2 = list->first;
    tmp->next = NULL;
    while (list->first->next)
        list->first = list->first->next;
    list->first->next = tmp;
    list->first = tmp2;
    if (check_list(list, link) == 1)
        my_putstr("ra ");
    else
        my_putstr("ra");
}
