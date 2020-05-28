/*
** EPITECH PROJECT, 2020
** my_itoa.c
** File description:
** my_itoa.c
*/

#include <stdlib.h>

char *my_itoa(int nb)
{
    int len = 0;
    char *str = NULL;

    for (int tmp = nb; tmp > 0; len = len + 1)
        tmp = tmp / 10;
    str = malloc(sizeof(char) * (len + 1));
    str[len] = '\0';
    for (len = len - 1; len >= 0; len = len - 1) {
        str[len] = nb % 10 + '0';
        nb = nb / 10;
    }
    return (str);
}
