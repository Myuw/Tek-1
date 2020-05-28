/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** my_atoi
*/
#include "../lib.h"

int my_atoi(char *str)
{
    int a = 0;
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            a = a * 10;
            a += (str[i] - 48);
        }
        else
            break;
    }
    return (a);
}
