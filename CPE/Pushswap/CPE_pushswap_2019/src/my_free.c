/*
** EPITECH PROJECT, 2019
** my_free
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

void my_free(head_t *list, link_t *link)
{
    link = list->first;
    for (; list->len > 0; list->len--, link = link->next)
        free(link);
    free(list);
}
