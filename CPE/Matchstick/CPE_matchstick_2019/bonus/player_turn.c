/*
** EPITECH PROJECT, 2020
** player_turn
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int match_remaining(int line, char **board)
{
    int nb_matches = 0;

    for (int y = 1; board[line][y] != '\0'; y++) {
        if (board[line][y] == '|')
            nb_matches++;
    }
    return (nb_matches);
}

int player_turn(char **board, int line, int matches, input_t *input)
{
    static int turn = 0;
    int match_return = 0;

    if (turn % 2 == 0)
        my_putstr("\nPlayer 1 turn: \n");
    else
        my_putstr("\nPlayer 2 turn: \n");
    if (my_line(line, input) == -2)
        return (-2);
    turn++;
    my_printf("Match(es) remaining = %d\n",
                match_remaining(input->input_line, board));
    match_return = my_match(board, line, matches, input);
    if (match_return == -2)
        return (-2);
    else if (match_return == -1)
        return (0);
    input->nb_match_picked = manage_board
        (board, input->input_line, input->input_match);
    return (0);
}

int my_line(int line, input_t *input)
{
    while ((input->input_line = get_input_line(line)) <= 0) {
        if (input->input_line == -2)
            return (-2);
    }
    return (0);
}

int my_match(char **board, int line, int matches, input_t *input)
{
    while ((input->input_match = get_input_matches
            (matches, input->input_line, board)) <= 0) {
        if (input->input_match == -1) {
            player_turn(board, line, matches, input);
            return (-1);
        }
        if (input->input_match == -2)
            return (-2);
    }
    return (0);
}
