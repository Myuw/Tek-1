/*
** EPITECH PROJECT, 2020
** my_victory
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

int my_check_line(char *line)
{
    for (int i = 2; line[i] != '\n'; i++) {
        if (line[i] == '2'
        || line[i] == '3'
        || line[i] == '4'
        || line[i] == '5')
        return (0);
    }
    return (1);
}

int victory(char **map)
{
    for (int x = 3; x < 10; x++) {
        if (my_check_line(map[x]) == 1)
            return (1);
    }
    return (0);
}
