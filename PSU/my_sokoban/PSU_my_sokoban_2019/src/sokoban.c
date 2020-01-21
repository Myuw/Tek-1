/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"
#include <ncurses.h>
#include <unistd.h>

char **getch_key(char **tab, pos_t pos, int i)
{
    switch (i) {
    case KEY_DOWN:
        move_down(tab, pos);
        return (tab);
    case KEY_UP:
        move_up(tab, pos);
        return (tab);
    case KEY_LEFT:
        move_left(tab, pos);
        return (tab);
    case KEY_RIGHT:
        move_right(tab, pos);
        return (tab);
    default:
        return (tab);
    }
}

void start_sokoban(char **tab, int line)
{
    clear();
    display_tab(tab, line);
    refresh();
}

void init_screen(void)
{
    initscr();
    noecho();
    curs_set(FALSE);
}

void sokoban(char **tab, int line, int column, char *buffer)
{
    pos_t pos;
    int i = 0;

    init_screen();
    start_sokoban(tab, line);
    while (1) {
        keypad(stdscr, TRUE);
        pos = get_pos_p(tab, line, column);
        i = getch();
        tab = getch_key(tab, pos, i);
        if (i == 27)
            break;
        if (i == 32)
            tab = create_tab_char(buffer, tab);
        display_tab(tab, line);
        if (LINES < line || COLS < column)
            resize_message();
    }
    endwin();
}
