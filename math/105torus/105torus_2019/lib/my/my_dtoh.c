/*
** EPITECH PROJECT, 2019
** my_dtoh.c
** File description:
** convert decimal --> hexadecimal number
*/

int my_put_nbr(int nb);

void my_dtoh_x2(unsigned long int nb);

void my_dtoh_x(unsigned long int nb);

void sharp_condition(char c, int d);

void my_dtoh(unsigned long int nb, char c, int d)
{
    int tab[nb], i;

    for (i = 0; nb > 0; i++) {
        tab[i] = nb % 16;
        nb = nb / 16;
    }
    sharp_condition(c, d);
    for (i = i - 1; i >= 0; i--) {
        if (c == 'X') {
            if (tab[i] >= 10)
                my_dtoh_x2(tab[i]);
            else
                my_put_nbr(tab[i]);
        } else if (c == 'x')
            if (tab[i] >= 10)
                my_dtoh_x(tab[i]);
            else
                my_put_nbr(tab[i]);
        else
            my_put_nbr(tab[i]);
    }
}
