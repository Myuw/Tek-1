/*
** EPITECH PROJECT, 2019
** my_strcomp
** File description:
** compares two strings
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int counter = 0;

    while (s1[counter] != '\0') {
        if (s1[counter] != s2[counter])
            return (1);
        counter = counter + 1;
    }
    if (my_strlen(s2) > my_strlen(s1))
        return (-1);
    else if (my_strlen(s2) == my_strlen(s1))
        return (0);
    return (84);
}
