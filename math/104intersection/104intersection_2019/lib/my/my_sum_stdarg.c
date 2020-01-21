/*
** EPITECH PROJECT, 2019
** sum_stdarg
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>

int my_strlen(char const *str);

int sum_stdarg(int i, int nb, ...)
{
    va_list list;
    int total = 0;

    va_start(list, nb);
    if (i == 0)
        for (int k = 0; k < nb; k++)
            total = total + va_arg(list, int);
    if (i == 1)
        for (int k = 0; k < nb; k++)
            total = total + my_strlen(va_arg(list, char *));
    va_end(list);
    return (total);
}
