/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** Task05
*/

int my_compute_square_root(int nb)
{
    int nb2 = 0;
    if (nb < 0 || nb == 0)
        return (0);
    while (nb2 * nb2 != nb) {
        nb2++;
        if (nb2 > nb)
            return (0);
    }
    if (nb2 * nb2 == nb)
        return (nb2);
    else
        return (0);
}
