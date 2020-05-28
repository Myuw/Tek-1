/*
** EPITECH PROJECT, 2020
** check_tetrimino
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"
#include <stdlib.h>

int check_nbr(char **tab)
{
    for (int x = 0; x < 2; x++)
        for (int y = 0; tab[x][y] != '\0'; y++)
            if (tab[x][y] < '0' || tab[x][y] > '9')
                return (-1);
    return (0);
}

int check_star(char **tab)
{
    for (int x = 3; tab[x]; x++)
        for (int y = 0; tab[x][y] != '\0'; y++)
            if (tab[x][y] != '*' && tab[x][y] != ' ' && tab[x][y] != '\n')
                return (-1);
    return (0);
}

int check_tetrimino(char *tetrimino)
{
    (void)long_options;
    char **tab = my_strtab(tetrimino, ' ');

    if (check_nbr(tab) == -1)
        return (-1);
    if (check_star(tab) == -1)
        return (-1);
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
    return (0);
}