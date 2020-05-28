/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my_put_nbr
*/
#include <unistd.h>
#include "../lib.h"

int my_put_nbr(int nb)
{
    unsigned int num = nb;

    if (nb < 0) {
        write(1, "-", 1);
        num = nb * -1;
    }
    if (num >= 10) {
        nb = num % 10;
        my_put_nbr(num / 10);
    }
    else
        nb = num;
    write(1, "0" + nb % 10, 1);
    return (0);
}
