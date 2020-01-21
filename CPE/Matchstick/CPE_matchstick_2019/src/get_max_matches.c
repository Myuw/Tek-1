/*
** EPITECH PROJECT, 2020
** get_max_matches
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int get_max_matches(char **board)
{
    int nb_matches = 0;

    for (int x = 1; board[x] != NULL; x++) {
        for (int y = 1; board[x][y] != '\0'; y++)
            if (board[x][y] == '|')
                nb_matches++;
    }
    return (nb_matches);
}
