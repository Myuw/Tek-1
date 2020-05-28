/*
** EPITECH PROJECT, 2020
** my_print_map
** File description:
** navy
*/

#include "navy.h"
#include "my.h"
#include <stddef.h>

void my_print_map(char **map)
{
    for (int i = 0; map[i]; i++) {
        my_putstr(map[i]);
        my_putchar('\n');
    }
}