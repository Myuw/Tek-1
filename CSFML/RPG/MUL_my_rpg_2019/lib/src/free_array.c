/*
** EPITECH PROJECT, 2020
** free_array
** File description:
** free_array
*/
#include <stdlib.h>
#include <stddef.h>
#include "../lib.h"

void free_array(char **tab)
{
    int i = 0;

    for (; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}
