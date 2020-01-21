/*
** EPITECH PROJECT, 2019
** tab_char
** File description:
** bsq
*/

#include "bsq.h"
#include "my.h"
#include <stdlib.h>

char **tab_char(char *buffer, char **tabb)
{
    int i;

    for (i = 0; buffer[i] != '\n'; i++);
    i = i + 1;
    for (int x = 0; buffer[i] != '\0'; x++, i++) {
        for (int y = 0; buffer[i] != '\n'; y++, i++) {
            if (buffer[i] == 'o')
                tabb[x][y] = 'o';
            else if (buffer[i] == '.')
                tabb[x][y] = '.';
        }
    }
    return (tabb);
}
