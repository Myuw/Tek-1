/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** task04
*/

int my_compute_power_rec(int nb, int power)
{
    if (power == 1)
        return (nb);
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    if (power > 1)
        nb *= my_compute_power_rec(nb, power - 1);
    return (nb);
}
