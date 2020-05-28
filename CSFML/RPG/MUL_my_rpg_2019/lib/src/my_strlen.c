/*
** EPITECH PROJECT, 2019
** func
** File description:
** func
*/
#include <unistd.h>
#include "../lib.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
