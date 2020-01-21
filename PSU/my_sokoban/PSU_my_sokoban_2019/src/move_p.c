/*
** EPITECH PROJECT, 2019
** move_p
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"
#include <ncurses.h>

char **move_down(char **tab, pos_t pos)
{
    if (tab[pos.pos_p_x + 1][pos.pos_p_y] == '#')
        return (tab);
    else if (tab[pos.pos_p_x + 1][pos.pos_p_y] == 'X')
        complex_down(tab, pos);
    else
        simple_down(tab, pos);
}

char **move_up(char **tab, pos_t pos)
{
    if (tab[pos.pos_p_x - 1][pos.pos_p_y] == '#')
        return (tab);
    else if (tab[pos.pos_p_x - 1][pos.pos_p_y] == 'X')
        complex_up(tab, pos);
    else
        simple_up(tab, pos);
}

char **move_left(char **tab, pos_t pos)
{
    if (tab[pos.pos_p_x][pos.pos_p_y - 1] == '#')
        return (tab);
    else if (tab[pos.pos_p_x][pos.pos_p_y - 1] == 'X')
        complex_left(tab, pos);
    else
        simple_left(tab, pos);
}

char **move_right(char **tab, pos_t pos)
{
    if (tab[pos.pos_p_x][pos.pos_p_y + 1] == '#')
        return (tab);
    else if (tab[pos.pos_p_x][pos.pos_p_y + 1] == 'X')
        complex_right(tab, pos);
    else
        simple_right(tab, pos);
}
