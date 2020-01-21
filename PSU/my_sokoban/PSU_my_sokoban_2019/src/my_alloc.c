/*
** EPITECH PROJECT, 2019
** my_alloc
** File description:
** sokoban
*/

#include <stdlib.h>

void my_alloc(char **tab, int line, int column)
{
    for (int i = 0; i != line + 1; i++)
        tab[i] = malloc(sizeof(char) * (column + 2));
}
