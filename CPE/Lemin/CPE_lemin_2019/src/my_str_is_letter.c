/*
** EPITECH PROJECT, 2020
** my_str_is_nbr
** File description:
** lib function
*/

#include "lemin.h"

int my_str_is_letter(char c)
{
    if (c == ' ' || c == '\n')
        return (0);
    if ((c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z'))
        return (-1);
    return (0);
}
