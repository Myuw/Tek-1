/*
** EPITECH PROJECT, 2019
** my_putsastr.c
** File description:
** a putstr that shows every ascii characters
*/

#include "my.h"

void my_putsastr(char const *str)
{
    char *result;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 32 && str[i] < 127) {
            my_putchar(str[i]);
        }
        else {
            result = my_base_converter(str[i], 8, '0');
            my_putchar('\\');
            for (int a = 0; a < 3 - my_strlen(result); a++)
                my_putchar('0');
            my_putstr(result);
        }
    }
}
