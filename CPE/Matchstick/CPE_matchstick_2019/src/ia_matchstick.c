/*
** EPITECH PROJECT, 2020
** ia_matchstick
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int ia_matchstick(char **board, int line)
{
    int i = 0;
    int j = 0;

    my_putstr("\nAI's turn...\n");
    for (int x = 1; board[x] != NULL; x++)
        for (int y = line * 2 - 1; board[x][y] != '*'; y--)
            if (board[x][y] == '|') {
                i = x;
                j = y;
                break;
            }
    board[i][j] = ' ';
    my_printf("AI removed 1 match(es) from line %d\n", i);
    print_board(board);
    return (1);
}
