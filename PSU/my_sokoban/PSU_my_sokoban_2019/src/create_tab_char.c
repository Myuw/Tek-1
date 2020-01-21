/*
** EPITECH PROJECT, 2019
** tab_char
** File description:
** bsq
*/

#include "sokoban.h"
#include "my.h"
#include <stdlib.h>

char **create_tab_char(char *buffer, char **tab)
{
    int x = 0;
    int y = 0;

    for (int i = 0; buffer[i] != '\0'; x++, i++) {
        for (y = 0; buffer[i] != '\n'; y++, i++) {
            tab[x][y] = buffer[i];
        }
        tab[x][y] = '\0';
    }
    tab[x] = NULL;
    return (tab);
}
