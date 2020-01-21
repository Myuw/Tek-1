/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Task02
*/

#include <unistd.h>

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    write(1, str, i);
}
