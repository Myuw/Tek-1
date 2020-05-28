/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** lib function
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *s1, char *s2)
{
    char *result = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
    int i = 0;

    for (i = 0; *s1 != '\0'; i++)
        result[i] = *s1++;
    for (; *s2 != '\0'; i++)
        result[i] = *s2++;
    result[i] = '\0';
    return (result);
}
