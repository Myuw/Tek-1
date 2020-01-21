/*
** EPITECH PROJECT, 2019
** complex_mvt
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"

char **complex_down(char **tab, pos_t pos)
{
    if (tab[pos.pos_p_x + 2][pos.pos_p_y] == ' ' ||\
        tab[pos.pos_p_x + 2][pos.pos_p_y] == 'O') {
        tab[pos.pos_p_x][pos.pos_p_y] = ' ';
        tab[pos.pos_p_x + 1][pos.pos_p_y] = 'P';
        tab[pos.pos_p_x + 2][pos.pos_p_y] = 'X';
        return (tab);
    }
    else
        return (tab);
}

char **complex_up(char **tab, pos_t pos)
{
    if (tab[pos.pos_p_x - 2][pos.pos_p_y] == ' ' ||\
        tab[pos.pos_p_x - 2][pos.pos_p_y] == 'O') {
        tab[pos.pos_p_x][pos.pos_p_y] = ' ';
        tab[pos.pos_p_x - 1][pos.pos_p_y] = 'P';
        tab[pos.pos_p_x - 2][pos.pos_p_y] = 'X';
        return (tab);
    }
    else
        return (tab);
}

char **complex_left(char **tab, pos_t pos)
{
    if (tab[pos.pos_p_x][pos.pos_p_y - 2] == ' ' ||\
        tab[pos.pos_p_x][pos.pos_p_y - 2] == 'O') {
        tab[pos.pos_p_x][pos.pos_p_y] = ' ';
        tab[pos.pos_p_x][pos.pos_p_y - 1] = 'P';
        tab[pos.pos_p_x][pos.pos_p_y - 2] = 'X';
        return (tab);
    }
    else
        return (tab);
}

char **complex_right(char **tab, pos_t pos)
{
    if (tab[pos.pos_p_x][pos.pos_p_y + 2 + 2] == ' ' ||\
        tab[pos.pos_p_x][pos.pos_p_y + 2] == 'O') {
        tab[pos.pos_p_x][pos.pos_p_y] = ' ';
        tab[pos.pos_p_x][pos.pos_p_y + 1] = 'P';
        tab[pos.pos_p_x][pos.pos_p_y + 2] = 'X';
        return (tab);
    }
    else
        return (tab);
}
