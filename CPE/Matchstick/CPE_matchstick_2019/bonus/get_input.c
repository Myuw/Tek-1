/*
** EPITECH PROJECT, 2020
** get_input_line
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int get_input_matches(int matches, int line, char **board)
{
    char *input_matches = NULL;
    size_t buffsize = 0;
    int result = 0;

    my_putstr("Matches: ");
    if (getline(&input_matches, &buffsize, stdin) == -1)
        return (-2);
    if (check_input_matches(input_matches, matches) == 0)
        if (check_line(board, line, my_getnbr(input_matches)) == 0) {
            result = my_getnbr(input_matches);
            free(input_matches);
            return (result);
        }
    return (-1);
}

int get_input_line(int line)
{
    char *input_line = NULL;
    size_t buffsize = 0;
    int result = 0;

    my_putstr("Line: ");
    if (getline(&input_line, &buffsize, stdin) == -1)
        return (-2);
    if (check_input_line(input_line, line) == 0) {
        result = my_getnbr(input_line);
        free(input_line);
        return (result);
    }
    return (-1);
}
