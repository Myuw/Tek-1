/*
** EPITECH PROJECT, 2020
** my_print_map
** File description:
** navy
*/

#include "strd.h"
#include <stdio.h>

void print_map(char **map)
{
    for (int i = 0; map[i]; i++) {
        printf("%s", map[i]);
        if (map[i + 1] != NULL)
            printf("\n");
    }
}