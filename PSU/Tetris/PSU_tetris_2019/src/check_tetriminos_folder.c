/*
** EPITECH PROJECT, 2020
** check_tetriminos_folder
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"
#include <stddef.h>
#include <dirent.h>
#include <stdlib.h>

void print_nbr_tetriminos(void)
{
    struct dirent *di;
    DIR *dr = opendir("tetriminos");
    int nbr_tetriminos = 0;

    while ((di = readdir(dr)) != NULL) {
        if (di->d_name[0] != '.')
            nbr_tetriminos++;
    }
    my_putstr("Tetriminos : ");
    my_put_nbr(nbr_tetriminos);
    my_putchar('\n');
    closedir(dr);
}

void check_tetriminos_folder(input_t *input)
{
    (void)long_options;
    struct dirent *de;
    DIR *dr = opendir("tetriminos");

    if (dr == NULL)
        exit(84);
    print_nbr_tetriminos();
    while ((de = readdir(dr)) != NULL) {
        if (de->d_name[0] != '.')
            get_tetriminos_path(input, de->d_name);
    }
    closedir(dr);
    my_putstr("Press any key to start Tetris");
}