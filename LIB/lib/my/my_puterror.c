/*
** EPITECH PROJECT, 2020
** my_puterror
** File description:
** lib function
*/

#include <unistd.h>

void my_puterror(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    write(2, str, i);
}
