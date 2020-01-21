/*
** EPITECH PROJECT, 2020
** my_error
** File description:
** 105
*/

#include "my.h"
#include "105torus.h"

void my_error(char const *str)
{
    int output_error = 2;

    write(output_error, str, strlen(str));
    exit(84);
}
