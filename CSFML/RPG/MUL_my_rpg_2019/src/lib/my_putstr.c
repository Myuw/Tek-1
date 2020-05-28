/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** rpg
*/

#include <unistd.h>

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    write(1, str, i);
}