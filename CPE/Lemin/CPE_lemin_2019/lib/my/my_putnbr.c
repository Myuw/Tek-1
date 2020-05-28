/*
** EPITECH PROJECT, 2020
** my_putnbr.c
** File description:
** my_putnbr.c
*/

#include "libmy.h"

void my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        my_putnbr(nb / 10);
    my_putchar((nb % 10) + '0');
}
