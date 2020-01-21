/*
** EPITECH PROJECT, 2020
** manage_board
** File description:
** matchstick
*/

#include "my.h"
#include "include_bonus/matchstick_bonus.h"

int manage_board(char **board, int line, int matches, int turn)
{
    int y;
    int nb_matches_picked = 0;

    if (turn % 2 == 0)
        my_printf(PLAYER_2_TURN, matches, line);
    else
        my_printf(PLAYER_1_TURN, matches, line);
    for (y = 1; board[line][y] != '*'; y++);
    y--;
    for (; board[line][y] != '*'; y--)
        if (board[line][y] == '|' && matches != 0) {
            board[line][y] = ' ';
            matches--;
            nb_matches_picked++;
        }
    print_board(board);
    return (nb_matches_picked);
}
