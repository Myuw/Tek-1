/*
** EPITECH PROJECT, 2019
** lowest_nbr
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

int lowest_nbr(link_t *link)
{
    int min;

    min = link->data;
    while (link->next) {
        link = link->next;
        min = MIN(min, link->data);
    }
    return (min);
}
