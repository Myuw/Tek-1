/*
** EPITECH PROJECT, 2019
** bubble_sort
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

void bubble_sort(head_t *list_a)
{
    link_t *link = list_a->first;
    int first = list_a->first->data;
    int second = list_a->first->next->data;
    int i = 0;

    while (check_list(list_a, link) == 1) {
        for (; first <= second; i++) {
            my_ra(list_a);
            first = list_a->first->data;
            second = list_a->first->next->data;
        }
        if (first >= second)
            my_sa(list_a);
        for (; i > 0; i--)
            my_rra(list_a);
    }
}
