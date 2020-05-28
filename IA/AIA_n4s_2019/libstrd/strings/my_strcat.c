/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** concats two strings
*/

#include <stdlib.h>
#include <stddef.h>
#include "strd.h"

char *my_strcat(char *s0, char *s1)
{
    char *result = malloc(sizeof(char) * (my_strlen(s0) + my_strlen(s1) + 1));
    int i = 0;

    if (!result)
        return (NULL);
    for (; s0[i] != '\0'; i++)
        result[i] = s0[i];
    for (int a = 0; s1[a] != '\0'; a++, i++)
        result[i] = s1[a];
    result[i] = '\0';
    return (result);
}
