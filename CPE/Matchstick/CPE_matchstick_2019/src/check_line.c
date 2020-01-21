/*
** EPITECH PROJECT, 2020
** check_line
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int check_line(char **board, int line, int matches)
{
    int nb_matches = 0;

    for (int y = 1; board[line][y] != '\0'; y++) {
        if (board[line][y] == '|')
            nb_matches++;
    }
    if (matches <= nb_matches)
        return (0);
    else
        my_putstr("Error: not enough matches on this line\n");
    return (-1);
}
