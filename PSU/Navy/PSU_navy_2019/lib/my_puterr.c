/*
** EPITECH PROJECT, 2019
** my_puterr.c
** File description:
** puts an error on stderr
*/

#include "my.h"
#include <unistd.h>

int my_puterr(char const *str)
{
    write(2, str, my_strlen(str));
    return (0);
}
