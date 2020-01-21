/*
** EPITECH PROJECT, 2019
** my_printf_toolbox
** File description:
** complementary functions for my_printf
*/

#include "my.h"
#include <stdarg.h>

void va_my_putint(va_list list)
{
    my_putint(va_arg(list, int));
}

void va_my_putchar(va_list list)
{
    my_putchar(va_arg(list, int));
}

void va_my_putstr(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void va_my_putpercent(va_list list)
{
    list = list;
    my_putchar('%');
}

void va_my_putbinary(va_list list)
{
    my_putstr(my_base_converter(va_arg(list, unsigned int), 2, 'A'));
}
