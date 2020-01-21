/*
** EPITECH PROJECT, 2020
** game
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int game(char **board, int line, int matches)
{
    input_t *input = malloc(sizeof(input_t));
    int nb_match = get_max_matches(board);

    while (nb_match != 0) {
        player_turn(board, line, matches, input);
        if (input->input_line == -2 || input->input_match == -2) {
            my_free(input, board, line);
            return (-2);
        }
        nb_match = nb_match - input->nb_match_picked;
        if (nb_match == 0) {
            my_free(input, board, line);
            return (2);
        }
        ia_matchstick(board, line);
        nb_match--;
    }
    my_free(input, board, line);
    return (1);
}
