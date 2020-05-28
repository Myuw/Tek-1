/*
** EPITECH PROJECT, 2019
** my_puterr.c
** File description:
** puts an error on stderr
*/

#include <unistd.h>
#include "strd.h"

void my_puterr(char const *str)
{
    write(2, str, my_strlen(str));
}
