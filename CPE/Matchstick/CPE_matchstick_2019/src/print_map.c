/*
** EPITECH PROJECT, 2020
** print_map
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int print_map(char **av)
{
    int i = my_getnbr(av[1]);
    int j = my_getnbr(av[2]);
    int winner = 0;
    char **tab = malloc(sizeof(char *) * (i + 3));

    my_alloc(tab, i);
    tab = fill_tab(tab, i);
    print_board(tab);
    winner = game(tab, i, j);
    return (winner);
}
