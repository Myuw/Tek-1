/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf project hub file
*/

#include <stdarg.h>
#include "my.h"

int str_compare(char c, char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            return (i);
    }
    return (-1);
}

int my_putprintf(va_list list, const char *format)
{
    void (*fp[12]) (va_list) = {va_my_putint, va_my_putint, va_my_putchar, \
    va_my_putstr, va_my_putpercent, va_my_putbinary, va_my_putoctal, \
    va_my_puthexlo, va_my_puthexup, va_my_putuint, va_my_putsastr, \
    va_my_putptr};
    char converters[12] = {'i', 'd', 'c', 's', '%', 'b', 'o', 'x', 'X', \
    'u', 'S', 'p'};

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            if (str_compare(format[i + 1], converters) == -1)
                return (-1);
            else
                fp[str_compare(format[i + 1], converters)] (list);
            i++;
        }
        else
            my_putchar(format[i]);
    }
    return (0);
}

int my_printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    if (my_putprintf(list, format) != 0)
        return (84);
    va_end(list);
    return (0);
}
