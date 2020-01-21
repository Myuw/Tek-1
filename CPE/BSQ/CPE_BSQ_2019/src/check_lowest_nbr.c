/*
** EPITECH PROJECT, 2019
** check_lower_nbr
** File description:
** bsq
*/

#include "my.h"
#include "bsq.h"

int check_lowest_nbr(int a, int b, int c)
{
    int nb;

    nb = a < b ? a : b;
    nb = nb < c ? nb : c;
    return (nb);
}
