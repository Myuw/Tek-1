/*
** EPITECH PROJECT, 2020
** check_input_line
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

int check_input_matches(char *buffer, int matches)
{
    for (int i = 0; buffer[i] != '\n'; i++) {
        if (buffer[i] < '0' || buffer[i] > '9') {
            my_putstr("Error: invalid input (positive number expected)\n");
            return (1);
        }
    }
    if (my_getnbr(buffer) == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (1);
    }
    if (my_getnbr(buffer) < 1 || my_getnbr(buffer) > matches) {
        my_printf("Error: you cannot remove more than %d matches per turn\n"\
                    , matches);
        return (1);
    }
    return (0);
}

int check_input_line(char *buffer, int line)
{
    for (int i = 0; buffer[i] != '\n'; i++) {
        if (buffer[i] < '0' || buffer[i] > '9') {
            my_putstr("Error: invalid input (positive number expected)\n");
            return (1);
        }
    }
    if (my_getnbr(buffer) < 1 || my_getnbr(buffer) > line) {
        my_putstr("Error: this line is out of range\n");
        return (1);
    }
    return (0);
}
