/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq
*/

#include "bsq.h"
#include "my.h"
#include <stdlib.h>

void bsq(char *buffer, int line, int column)
{
    int x = 0;
    int y = 0;
    int nbr = 0;
    int **tab = malloc(sizeof(int *) * (line + 2));
    char **tabb = malloc(sizeof(char *) * (line + 2));

    my_alloc(tab, tabb, line, column);
    tab = tab_int(buffer, tab);
    tabb = tab_char(buffer, tabb);
    for (x = 1; x < line; x++) {
        for (y = 1; y < column; y++) {
            while (tab[x][y] == 0)
                y++;
            nbr = check_lowest_nbr(tab[x][y - 1], tab[x - 1][y],\
                                    tab[x - 1][y - 1]);
            tab[x][y] = nbr + 1;
        }
    }
    highest_nbr(tab, tabb, line, column);
    free(buffer);
}
