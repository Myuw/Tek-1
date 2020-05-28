/*
** EPITECH PROJECT, 2019
** my_int_to_str.c
** File description:
** takes an int and makes a string
*/

#include <stdlib.h>
#include "strd.h"

char *my_itos(int nb)
{
    int drynb = nb;
    int counter = 1;
    char *result;

    while (drynb != drynb % 10) {
        drynb = drynb/10;
        counter++;
    }
    result = malloc(sizeof(char) * counter);
    for (int i = 0; i <= counter - 1; i++) {
        result[i] = (nb % 10) + '0';
        nb = nb/10;
    }
    return (my_revstr(result));
}
