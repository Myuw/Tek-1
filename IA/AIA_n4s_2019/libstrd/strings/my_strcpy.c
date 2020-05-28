/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** copies a string to a destination
*/

#include <stddef.h>
#include <stdlib.h>
#include "strd.h"

char *my_strcpy(const char *src)
{
    char *dest = NULL;
    int len = my_strlen(src);
    int i = 0;

    dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (NULL);
    for (; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
