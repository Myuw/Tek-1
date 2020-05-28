/*
** EPITECH PROJECT, 2019
** my_base_converter.c
** File description:
** takes a decimal string and output a string of the choosen base
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char *my_base_converter(unsigned long int decimal, int base, \
unsigned char alpha)
{
    unsigned long int drynb = decimal;
    unsigned long int i = 0;
    char *result;

    while (drynb != 0) {
        drynb = drynb/base;
        i++;
    }
    result = malloc(sizeof(int) * (i + 1));
    for (unsigned long int a = 0; decimal != 0; a++) {
        if (decimal % base >= 10)
            result[a] = ((decimal % base) - 10) + alpha;
        else
            result[a] = (decimal % base) + '0';
        decimal = decimal/base;
    }
    result[i] = '\0';
    return (my_revstr(result));
}
