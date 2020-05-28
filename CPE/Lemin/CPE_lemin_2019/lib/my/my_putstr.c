/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include "libmy.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
