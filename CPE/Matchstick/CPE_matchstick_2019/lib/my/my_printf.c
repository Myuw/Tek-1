/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_put_nbr(int nb);

int my_put_nbr_unsigned_int(unsigned int nb);

int my_dtob(unsigned int nb);

long int my_dtoh(unsigned long int nb, char c, int d);

long int my_dtoh_2(unsigned long int nb);

long int my_dtoo(unsigned long int nb, int d);

void check_percent_2(char *str, va_list list, int k, int d);

void check_percent(char *str, va_list list, int k, int d)
{
    switch (str[k]) {
    case 'c':
        my_putchar((char)va_arg(list, int));
        break;
    case 's':
        my_putstr(va_arg(list, char *));
        break;
    case '%':
        my_putchar('%');
        break;
    case 'd':
        my_put_nbr(va_arg(list, int));
        break;
    case 'i':
        my_put_nbr(va_arg(list, int));
        break;
    }
    check_percent_2(str, list, k, d);
}

void check_percent_2(char *str, va_list list, int k, int d)
{
    switch (str[k]) {
    case 'x':
        my_dtoh(va_arg(list, unsigned long int), str[k], d);
        break;
    case 'X':
        my_dtoh(va_arg(list, unsigned long int), str[k], d);
        break;
    case 'b':
        my_dtob(va_arg(list, unsigned int));
        break;
    case 'u':
        my_put_nbr_unsigned_int(va_arg(list, unsigned int));
        break;
    case 'o':
        my_dtoo(va_arg(list, unsigned long int), d);
        break;
    case 'p':
        my_dtoh_2(va_arg(list, unsigned long int));
        break;
    }
}

int my_printf(char *str, ...)
{
    va_list list;
    int d = 0;

    va_start(list, str);
    for (int k = 0; str[k] != '\0'; k++) {
        d = 0;
        if (str[k] == '%' && str[k + 1] == '#') {
            d++;
            k = k + 2;
            check_percent(str, list, k, d);
        }
        else if (str[k] ==  '%') {
            k++;
            check_percent(str, list, k, d);
        }
        else
            my_putchar(str[k]);
    }
    va_end(list);
    return (0);
}
