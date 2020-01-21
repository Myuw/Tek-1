/*
** EPITECH PROJECT, 2019
** my_dtob
** File description:
** convert decimal --> binaire number
*/

int my_put_nbr(int nb);

int my_dtob(unsigned int nb)
{
    int tab[nb];
    int i;

    for (i = 0; nb > 0; i++) {
        tab[i] = nb % 2;
        nb = nb / 2;
    }
    for (i = i - 1; i >= 0; i--)
        my_put_nbr(tab[i]);
    return (0);
}
