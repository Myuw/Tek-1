/*
** EPITECH PROJECT, 2019
** count_buffer
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"
#include <stddef.h>
#include <stdlib.h>

void count_buffer(char *buffer)
{
    int line = 0;
    int column = 0;
    int z = 0;
    int i = 0;
    char **tab = NULL;

    for (; buffer[z] != '\0'; z++) {
        i++;
        if (buffer[z] == '\n') {
            line++;
            column = MAX(column, i);
            i = 0;
        }
    }
    tab = malloc(sizeof(char *) * (line + 1));
    my_alloc(tab, line, column);
    tab = create_tab_char(buffer, tab);
    sokoban(tab, line, column, buffer);
}
