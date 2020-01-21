/*
** EPITECH PROJECT, 2019
** disp_stdarg
** File description:
** bootstrap my_printf
*/

#include <stdarg.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_put_nbr(int nb);

int disp_stdarg(char *str, va_list list)
{
    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] == '%' && (str[k + 1] == 'c' || str[k + 1] == 'C'))
            my_putchar((char)va_arg(list, int));
        if (str[k] == '%' && (str[k + 1] == 's' || str[k + 1] == 'S'))
            my_putstr(va_arg(list, char*));
        if (str[k] == '%' && (str[k + 1] == 'i' || str[k + 1] == 'I'||
                              str[k + 1] == 'd' || str[k + 1] == 'D'))
            my_put_nbr(va_arg(list, int));
    }
    return (0);
}
