/*
** EPITECH PROJECT, 2020
** my_puterror.c
** File description:
** my_puterror.c
*/

#include <unistd.h>
#include "libmy.h"

void my_puterror(char const *str)
{
    write(2, str, my_strlen(str));
}
