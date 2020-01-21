/*
** EPITECH PROJECT, 2019
** defeat_condition
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"
#include <stdlib.h>
#include <ncurses.h>

int check_defeat_condition(char **tab, int x, int y)
{
    if (y == 0 || x == 0)
        return (0);
    if (((tab[y][x + 1] == '#' && tab[y + 1][x] == '#') ||\
        (tab[y + 1][x] == '#' && tab[y][x - 1] == '#') ||\
        (tab[y][x - 1] == '#' && tab[y - 1][x] == '#') ||\
        (tab[y - 1][x] == '#' && tab[y][x + 1] == '#')) &&\
        tab[y][x] != 'O')
        return (1);
    return (0);
}

int count_x(char **tab, int x, int y)
{
    int nb = 0;

    for (int i = 0; tab[i] != NULL; i++)
        for (int j = 0; tab[i][j] != '\0'; j++)
            if (tab[i][j] == 'X')
                nb++;
    return (nb);
}

void defeat_condition(char **tab, int x, int y)
{
    int nb = count_x(tab, x, y);
    int nbr = 0;

    for (int i = 0; tab[i] != NULL; i++)
        for (int j = 0; tab[i][j] != '\0'; j++)
            ;
    if (nbr == nb) {
        endwin();
        exit(EXIT_FAILURE);
    }
}
