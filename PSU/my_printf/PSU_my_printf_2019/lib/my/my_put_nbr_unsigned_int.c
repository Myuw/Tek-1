/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** Task07
*/

#include <unistd.h>

void my_putchar(char const c);

int my_put_nbr_unsigned_int(unsigned int nb)
{
    unsigned int n = nb;

    if (n < 0)
    {
        nb = n;
    }
    if (nb > 9)
    {
        my_put_nbr_unsigned_int(nb / 10);
        my_put_nbr_unsigned_int(nb % 10);
    }
    else
        my_putchar(nb + '0');

}
