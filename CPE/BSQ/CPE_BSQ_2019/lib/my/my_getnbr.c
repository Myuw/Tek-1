/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** my_getnbr.c
*/

int my_getnbr(char const *str)
{
    int nb = 0;
    long nbr = 0;
    int i1 = -1;
    int minus = 0;

    for (int i = 0; str[i] != '\0'; i = i + 1)
        if (str[i] >= '0' && str[i] <= '9' && i1 == -1)
            i1 = i;
    for (int i = i1; str[i] >= '0' && str[i] <= '9'; i = i + 1)
        nbr = ((nbr + (str[i] - '0')) * 10);
    nbr = nbr / 10;
    for (int i = 0; i < i1; i = i + 1)
        if (str[i] == '-')
            minus = minus + 1;
    if (minus % 2 == 1)
        nbr = -nbr;
    if (nbr > 2147483647 || nbr < -2147483648)
        return (0);
    nb = nbr;
    return (nb);
}
