/*
** EPITECH PROJECT, 2019
** my_alloc
** File description:
** bsq
*/

#include "bsq.h"
#include "my.h"
#include <stdlib.h>

void my_alloc(int **tab, char **tabb, int line, int column)
{
    for (int x = 0; x != line + 1; x++)
        tab[x] = malloc(sizeof(int) * (column + 2));
    for (int x = 0; x != line; x++)
        tabb[x] = malloc(sizeof(char) * (column + 2));
}
