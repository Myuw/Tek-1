/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** my_strcmp
*/
#include "../lib.h"

int my_strcmp(char const *str1, char const *str2)
{
    int len1 = 0;
    int len2 = 0;

    len1 = my_strlen(str1);
    len2 = my_strlen(str2);
    if (len1 != len2)
        return (1);
    for (int i = 0; str1[i] != '\0'; i++)
        if (str1[i] != str2[i])
            return (1);
    return (0);
}
