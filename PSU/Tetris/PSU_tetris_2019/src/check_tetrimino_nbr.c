/*
** EPITECH PROJECT, 2020
** check_tetrimino_nbr
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"
#include <stdlib.h>

void free_tab(char **tab)
{
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}

int check_tetrimino_size(char *tetrimino, info_t *info)
{
    char **tab = my_strtab(tetrimino, '\n');
    int x = 0;
    int y = 0;
    int max_row = 0;
    int max_col = 0;

    tab = my_strtab(tetrimino, '\n');
    tab = erase_bad_space(tab);
    for (x = 1; tab[x]; x++) {
        for (y = 0; tab[x][y] != '\0'; y++);
        max_col = MAX(max_col, y);
    }
    max_row = x - 2;
    free_tab(tab);
    if (max_row  != info->row || max_col != info->col)
        return (-1);
    return (0);
}

int check_tetrimino_nbr(input_t *input, char *tetrimino, info_t *info)
{
    (void)long_options;
    char **tab = my_strtab(tetrimino, ' ');

    info->row = my_getnbr(tab[1]);
    info->col = my_getnbr(tab[0]);
    info->color = my_getnbr(tab[2]);
    if (info->row > input->row || info->col > input->col)
        return (-1);
    if (check_tetrimino_size(tetrimino, info) == -1)
        return (-1);
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
    return (0);
}