/*
** EPITECH PROJECT, 2019
** my_free
** File description:
** bsq
*/

#include "bsq.h"
#include "my.h"
#include <stdlib.h>

void my_free(int **tab, char **tabb, int line, int column)
{
    for (int x = 0; x != line + 1; x++)
        free(tab[x]);
    free(tab);
    for (int x = 0; x != line + 1; x++)
        free(tabb[x]);
    free(tabb);
}
