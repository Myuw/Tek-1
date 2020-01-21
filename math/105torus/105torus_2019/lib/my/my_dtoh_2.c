/*
** EPITECH PROJECT, 2019
** my_dtoh_2
** File description:
** convert decimal --> hexadecimal number
*/

int my_put_nbr(int nb);

void my_dtoh_x(unsigned long int nb);

char my_putstr(char const *str);

long int my_dtoh_2(unsigned long int nb)
{
    int tab[nb];
    int i;

    my_putstr("0x");
    for (i = 0; nb > 0; i++) {
        tab[i] = nb % 16;
        nb = nb / 16;
    }
    for (i = i - 1; i >= 0; i--) {
        if (tab[i] >= 10)
            my_dtoh_x(tab[i]);
        else
            my_put_nbr(tab[i]);
    }
    return (0);
}
