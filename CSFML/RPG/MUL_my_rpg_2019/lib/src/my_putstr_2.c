/*
** EPITECH PROJECT, 2020
** my_putstr_2
** File description:
** my_putstr_2
*/
#include <unistd.h>
#include "../lib.h"

void my_putstr_2(char const *str)
{
    write(1, str, my_strlen(str));
}
