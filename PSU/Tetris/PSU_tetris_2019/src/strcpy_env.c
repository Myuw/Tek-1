/*
** EPITECH PROJECT, 2020
** strcpy_env
** File description:
** tetris
*/

#include "my.h"
#include <stdlib.h>

char *strcpy_env(char *src, char *dest, int i)
{
    int len = my_strlen(src);
    int j = 0;

    dest = malloc(sizeof(char) * (len - i + 1));
    for (; i < len; i++, j++)
        dest[j] = src[i];
    dest[j] = '\0';
    return (dest);
}