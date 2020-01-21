/*
** EPITECH PROJECT, 2019
** tab_int
** File description:
** bsq
*/

#include "bsq.h"
#include "my.h"
#include <stdlib.h>

int **tab_int(char *buffer, int **tab)
{
    int i;

    for (i = 0; buffer[i] != '\n'; i++);
    i = i + 1;
    for (int x = 0; buffer[i] != '\0'; x++, i++) {
        for (int y = 0; buffer[i] != '\n'; y++, i++) {
            if (buffer[i] == 'o')
                tab[x][y] = 0;
            else if (buffer[i] == '.')
                tab[x][y] = 1;
        }
    }
    return (tab);
}
