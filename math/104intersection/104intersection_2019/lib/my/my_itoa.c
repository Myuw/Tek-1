/*
** EPITECH PROJECT, 2019
** my_itoa
** File description:
** convert int to char
*/

#include <stdlib.h>

char *my_itoa(int nb)
{
    int tmp = nb;
    int len = 0;
    char *str;

    while (tmp > 0)
    {
        tmp = tmp / 10;
        len++;
    }
    str = malloc(sizeof(char) * (len + 1));
    str[len] = '\0';
    for (len = len - 1; len >= 0; len--)
    {
        str[len] = nb % 10 + '0';
        nb = nb / 10;
    }
    return (str);
}
