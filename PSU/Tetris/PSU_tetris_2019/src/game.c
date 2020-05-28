/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include <ncurses.h>
#include <curses.h>
#include <stdlib.h>
#include "tetris.h"
#include "my.h"

int init_ncurse(map_t map, char **tetris)
{
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(FALSE);
    getch();
    for (int i = 0; i != 5; i++)
        printw(tetris[i]);
    for (int i = 0; i != map.lines; i++) {
        printw(map.array[i]);
    }
    getch();
    endwin();
    return 0;

}

int create_text(map_t map)
{
    char **tetris = NULL;

    tetris = malloc(sizeof(char * ) * 5);
    if (tetris == NULL)
        return 84;
    for (int i = 0; i != 10; i++)
        tetris[i] = malloc(sizeof(char) * 38);

    tetris[0] = "* * *  * * *  * * *  * * *  *  * * *\n\0";
    tetris[1] = "  *    *        *    *   *     *    \n\0";
    tetris[2] = "  *    * * *    *    * *    *  * * *\n\0";
    tetris[3] = "  *    *        *    *   *  *      *\n\0";
    tetris[4] = "  *    * * *    *    *   *  *  * * *\n\0";
    init_ncurse(map, tetris);
    return 0;
}

int init_map(map_t map)
{
    int i = 0;
    int j = 0;
    for (i = 0; i != map.lines; i++) {
        map.array[i][0] = '|';
        for (j = 1; j != map.cols; j++) {
            if (i == 0 || i == (map.lines - 1))
                map.array[i][j] = '_';
            else map.array[i][j] = ' ';
        }
        map.array[i][j - 2] = '|';
        map.array[i][j - 1] = '\n';
        map.array[i][j] = '\0';
    }
    map.array[0][0] = ' ';
    map.array[0][map.cols - 2] = ' ';
    map.array[map.lines - 1][0] = '|';
    map.array[map.lines - 1][map.cols - 2] = '|';
    if (create_text(map) == 84)
        return 84;
    return 0;
}

int create_map(void)
{
    (void)long_options;
    map_t map;

    map.array = NULL;
    map.lines = 21;
    map.cols = 25;
    map.array = malloc(sizeof(char *) * map.lines);
    if (map.array == NULL)
        return 84;
    for (int i = 0; i != map.lines; i++)
        map.array[i] = malloc(sizeof(char) * map.cols);
    if (init_map(map) == 84)
        return 84;
    return 0;
}
