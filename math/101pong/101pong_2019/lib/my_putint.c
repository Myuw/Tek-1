/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** takes a int number and displays it
*/

void my_putchar(char c);

void my_putint(int nb)
{
   if (nb < 0) {
	my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        my_putint(nb/10);
    my_putchar((nb % 10) + '0');
}
