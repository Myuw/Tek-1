/*
** EPITECH PROJECT, 2019
** highest_nbr
** File description:
** bsq
*/

#include "bsq.h"
#include "my.h"

void highest_nbr(int **tab, char **tabb, int line, int column)
{
    int nb = 0;
    int nb2 = 0;
    int a = 0;
    int b = 0;

    for (int x = 0; x != line; x++) {
        for (int y = 0; y != column; y++) {
            nb = MAX(nb, tab[x][y]);
            if (nb != nb2) {
                nb2 = nb;
                a = x;
                b = y;
            }
        }
    }
    print_tab_char(tabb, a, b, line, nb2);
}
