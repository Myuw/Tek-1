/*
** EPITECH PROJECT, 2019
** _my_printf_toolbox.c
** File description:
** toolbox for my_printf.c
*/

#include "my.h"
#include <stdarg.h>

void va_my_putoctal(va_list list)
{
    my_putstr(my_base_converter(va_arg(list, unsigned int), 8, '0'));
}

void va_my_puthexup(va_list list)
{
    my_putstr(my_base_converter(va_arg(list, unsigned int), 16, 'A'));
}

void va_my_puthexlo(va_list list)
{
    my_putstr(my_base_converter(va_arg(list, unsigned int), 16, 'a'));
}

void va_my_putuint(va_list list)
{
    my_putstr(my_base_converter(va_arg(list, unsigned int), 10, 'a'));
}

void va_my_putsastr(va_list list)
{
    my_putsastr(va_arg(list, char *));
}
