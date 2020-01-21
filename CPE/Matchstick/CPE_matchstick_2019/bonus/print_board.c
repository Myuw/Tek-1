/*
** EPITECH PROJECT, 2020
** print_board
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

void print_board(char **tab)
{
    for (int x = 0; tab[x] != NULL; x++) {
        my_putstr(tab[x]);
        my_putchar('\n');
    }
}
