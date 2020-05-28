/*
** EPITECH PROJECT, 2020
** get_map_size
** File description:
** tetris
*/

#include "my.h"
#include <stddef.h>
#include <stdlib.h>

int get_col(char *str)
{
    int i = 0;
    int j = 0;
    char *col = NULL;
    int len = my_strlen(str);

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ',')
            j = i;
    col = malloc(sizeof(char) * (len - i + 1));
    for (j = j + 2, i = 0; j < len; j++, i++)
        col[i] = str[j];
    col[i] = '\0';
    return (my_getnbr(col));
}