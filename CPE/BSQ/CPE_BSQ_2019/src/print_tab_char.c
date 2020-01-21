/*
** EPITECH PROJECT, 2019
** print_tab_char
** File description:
** bsq
*/

#include "bsq.h"
#include "my.h"
#include <unistd.h>

void **print_tab_char(char **tabb, int x, int y, int line, int nb)
{
    int z = y;
    int a = 0;

    for (int i = 0; i < nb; i++, y--) {
        for (int j = 0; j < nb; j++)
            tabb[x - j][y] = 'x';
    }
    while (line != 0){
        my_putstr(tabb[a]);
        my_putchar('\n');
        line--;
        a++;
    }
}
