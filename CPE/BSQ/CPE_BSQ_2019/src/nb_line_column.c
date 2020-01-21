/*
** EPITECH PROJECT, 2019
** nb_column_line
** File description:
** bsq
*/

#include "my.h"
#include "bsq.h"

void nb_line_column(char *buffer)
{
    int line = 0;
    int column = 0;
    int i = 0;

    while (buffer[i] != '\n')
        i++;
    line = my_getnbr(buffer);
    while (buffer[i + 1] != '\n') {
        column++;
        i++;
    }
    bsq(buffer, line, column);
}
