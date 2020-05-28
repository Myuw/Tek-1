/*
** EPITECH PROJECT, 2019
** my_getint.c
** File description:
** takes a string returns an int
*/

#include <unistd.h>
#include "strd.h"

int my_ten_pow(int nb)
{
    int result = 1;

    for (; nb > 0; nb--)
        result = result * 10;
    return (result);
}

int my_stoi(char *str)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++)
        result = (str[i] - '0') * my_ten_pow((my_strlen(str) - 1) - i) \
        + result;
    return (result);
}
