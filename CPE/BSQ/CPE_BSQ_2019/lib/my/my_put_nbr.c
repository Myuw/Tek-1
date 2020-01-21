/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** Task07
*/

#include <unistd.h>

void my_putchar(char const c);

int my_put_nbr(int nb)
{
    int n = nb;

    if (n < 0)
    {
        my_putchar('-');
        nb = -n;
    }
    if (nb > 9)
    {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else
        my_putchar(nb + '0');

}
