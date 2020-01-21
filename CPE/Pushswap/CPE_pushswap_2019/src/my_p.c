/*
** EPITECH PROJECT, 2019
** my_p
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

void my_pa(head_t *head_a, head_t *head_b)
{
    head_a->first = head_b->first;
    head_b->first->next = NULL;
    head_a->first->next = head_a->first;
    my_putstr("pa ");
}
