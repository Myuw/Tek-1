/*
** EPITECH PROJECT, 2019
** display_tab
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"
#include <ncurses.h>

void display_tab(char **tab, int line)
{
    clear();
    for (int i = 0; line != 0; line--, i++) {
        printw(tab[i]);
        printw("\n");
    }
    refresh();
}
