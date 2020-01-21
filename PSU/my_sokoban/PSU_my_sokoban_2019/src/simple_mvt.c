/*
** EPITECH PROJECT, 2019
** simple_mvt
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"

char **simple_down(char **tab, pos_t pos)
{
    tab[pos.pos_p_x][pos.pos_p_y] = ' ';
    tab[pos.pos_p_x + 1][pos.pos_p_y] = 'P';
    return (tab);
}

char **simple_up(char **tab, pos_t pos)
{
    tab[pos.pos_p_x][pos.pos_p_y] = ' ';
    tab[pos.pos_p_x - 1][pos.pos_p_y] = 'P';
    return (tab);
}

char **simple_left(char **tab, pos_t pos)
{
    tab[pos.pos_p_x][pos.pos_p_y] = ' ';
    tab[pos.pos_p_x][pos.pos_p_y - 1] = 'P';
    return (tab);
}

char **simple_right(char **tab, pos_t pos)
{
    tab[pos.pos_p_x][pos.pos_p_y] = ' ';
    tab[pos.pos_p_x][pos.pos_p_y + 1] = 'P';
    return (tab);
}
