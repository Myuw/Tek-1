/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** my_strcpy.c
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int len = my_strlen(src);

    dest = malloc(sizeof(char) * (len + 1));
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
