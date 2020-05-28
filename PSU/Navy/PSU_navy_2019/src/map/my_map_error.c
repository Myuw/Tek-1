/*
** EPITECH PROJECT, 2020
** my_map_attack
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

int my_two_point(char *buffer)
{
    if (buffer[1] != ':' || buffer[4] != ':')
        return (-1);
    if (buffer[9] != ':'|| buffer[12] != ':')
        return (-1);
    if (buffer[17] != ':'|| buffer[20] != ':')
        return (-1);
    if (buffer[25] != ':'|| buffer[28] != ':')
        return (-1);
    return (0);
}

int my_check_boat(char *buffer)
{
    if (buffer[0] != '2')
        return (-1);
    if (buffer[8] != '3')
        return (-1);
    if (buffer[16] != '4')
        return (-1);
    if (buffer[24] != '5')
        return (-1);
    return (0);
}

int my_check_letter(char *buffer)
{
    if (buffer[2] < 'A' || buffer[2] > 'H'
        || buffer[5] < 'A' || buffer[5] > 'H')
        return (-1);
    if (buffer[10] < 'A' || buffer[10] > 'H'
        || buffer[13] < 'A' || buffer[13] > 'H')
        return (-1);
    if (buffer[18] < 'A' || buffer[18] > 'H'
        || buffer[21] < 'A' || buffer[21] > 'H')
        return (-1);
    if (buffer[26] < 'A' || buffer[26] > 'H'
        || buffer[29] < 'A' || buffer[29] > 'H')
        return (-1);
    return (0);
}

int my_check_number(char *buffer)
{
    if (buffer[3] < '1' || buffer[3] > '8'
        || buffer[6] < '1' || buffer[6] > '8')
        return (-1);
    if (buffer[11] < '1' || buffer[11] > '8'
        || buffer[14] < '1' || buffer[14] > '8')
        return (-1);
    if (buffer[19] < '1' || buffer[19] > '8'
        || buffer[22] < '1' || buffer[22] > '8')
        return (-1);
    if (buffer[27] < '1' || buffer[27] > '8'
        || buffer[30] < '1' || buffer[30] > '8')
        return (-1);
    return (0);
}

int my_check_buffer(char *buffer)
{
    int i = my_strlen(buffer);

    if (i != 31)
        return (-1);
    if (my_check_boat(buffer) == -1)
        return (-1);
    if (my_two_point(buffer) == -1)
        return (-1);
    if (my_check_letter(buffer) == -1)
        return (-1);
    if (my_check_number(buffer) == -1)
        return (-1);
    if (no_same_params(buffer) == -1)
        return (-1);
    return (0);
}