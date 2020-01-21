/*
** EPITECH PROJECT, 2019
** biggest_nbr
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

int biggest_nbr(link_t *link)
{
    int max;

    max = link->data;
    while (link->next) {
        link = link->next;
        max = MAX(max, link->data);
    }
    return (max);
}
