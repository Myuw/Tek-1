/*
** EPITECH PROJECT, 2020
** parse_tetrimino
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"
#include <stdlib.h>
#include <unistd.h>

void putstr_tetrimino(char const *str)
{
    int i = 0;

    while (str[i] != '.')
        i++;
    write(1, str, i);
}

void display_tetrimino_info(char *tetrimino_name, info_t *info)
{
    my_putstr("Tetriminos : Name ");
    putstr_tetrimino(tetrimino_name);
    my_putstr(" : Size ");
    my_put_nbr(info->row);
    my_putchar('*');
    my_put_nbr(info->col);
    my_putstr(" : Color ");
    my_put_nbr(info->color);
    my_putstr(" :\n");
}

char **erase_bad_space(char **tab)
{
    for (int x = 1; tab[x]; x++)
        for (int y = 0; tab[x][y]; y++)
            if (tab[x][y] == ' '
                && (tab[x][y + 1] == '\n'
                || tab[x][y + 1] == '\0'))
                    tab[x][y] = '\0';
    return (tab);
}

void parse_tetrimino(input_t *input, char *tetrimino, char *tetrimino_name)
{
    (void)long_options;
    info_t *info = malloc(sizeof(info_t));
    char **tab = my_strtab(tetrimino, '\n');

    tab = erase_bad_space(tab);
    if (check_tetrimino_nbr(input, tetrimino, info) != 0) {
        error_tetrimino(tetrimino_name);
        return ;
    }
    display_tetrimino_info(tetrimino_name, info);
    for (int i = 1; tab[i]; i++) {
        my_putstr(tab[i]);
        if (tab[i + 1] != NULL)
            my_putchar('\n');
    }
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}