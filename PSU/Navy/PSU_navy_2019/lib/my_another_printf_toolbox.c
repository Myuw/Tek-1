/*
** EPITECH PROJECT, 2019
** my_another_printf_toolbox.c
** File description:
** another my_printf toolbox
*/

#include <stdarg.h>
#include "my.h"

void va_my_putptr(va_list list)
{
    my_putstr("0x");
    my_putstr(my_base_converter((long unsigned int) va_arg(list, void *), \
    16, 'a'));
}
