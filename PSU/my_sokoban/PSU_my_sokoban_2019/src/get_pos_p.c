/*
** EPITECH PROJECT, 2019
** get_pos_p
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"

pos_t get_pos_p(char **tab, int x, int y)
{
    pos_t pos;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            if (tab[i][j] == 'P') {
                pos.pos_p_x = i;
                pos.pos_p_y = j;
                return (pos);
            }
}

int get_pos_p_y(char **tab, int x, int y)
{
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            if (tab[i][j] == 'P')
                return (j);
}
