/*
** EPITECH PROJECT, 2020
** my_str_copy
** File description:
** my_str_copy
*/
#include <stdlib.h>
#include <stddef.h>
#include "../lib.h"

char *my_str_copy(char const *str)
{
    int i = 0;
    char *buffer = NULL;
    int len = 0;

    len = my_strlen(str);
    buffer = malloc(sizeof(char) * (len + 1));
    for (; str[i] != '\0'; i++)
        buffer[i] = str[i];
    buffer[len] = '\0';
    return (buffer);
}
