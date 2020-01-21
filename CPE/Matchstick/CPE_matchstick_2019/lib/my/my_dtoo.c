/*
** EPITECH PROJECT, 2019
** my_dtoo
** File description:
** convert decimal --> octal number
*/

int my_put_nbr(int nb);

void my_putchar(char c);

long int my_dtoo(unsigned long int nb, int d)
{
    int tab[nb];
    int i;

    if (d == 1)
        my_putchar('0');
    for (i = 0; nb > 0; i++) {
        tab[i] = nb % 8;
        nb = nb / 8;
    }
    for (i = i - 1; i >= 0; i--)
        my_put_nbr(tab[i]);
    return (0);
}
