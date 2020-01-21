/*
** EPITECH PROJECT, 2020
** my_free
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

void my_free(input_t *input, char **board, int i)
{
    for (int j = 0; j < i + 2; j++) {
        free(board[j]);
    }
    free(board);
    free(input);
}
