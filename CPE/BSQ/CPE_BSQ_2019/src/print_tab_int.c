/*
** EPITECH PROJECT, 2019
** print_tab
** File description:
** bsq
*/

#include "my.h"
#include "bsq.h"

void print_tab_int(int **tab, int line, int column)
{
    for (int x = 0; x != line; x++) {
        for (int y = 0; y != column; y++) {
            my_put_nbr(tab[x][y]);
        }
        my_putchar('\n');
    }
}
