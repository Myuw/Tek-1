/*
** EPITECH PROJECT, 2019
** resize_message
** File description:
** sokoban
*/

#include "my.h"
#include <ncurses.h>

void resize_message(void)
{
    char *msg = "Please enlarge the terminal";
    int len = my_strlen(msg);

    clear();
    mvprintw(LINES/2, (COLS / 2) - (len / 2), msg);
    refresh();
}
