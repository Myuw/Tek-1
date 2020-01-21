/*
** EPITECH PROJECT, 2019
** my_dtoh_x
** File description:
** aled
*/

void my_putchar(char c);

void my_dtoh_x_2(unsigned long int nb)
{
    if (nb == 13)
        my_putchar('d');
    if (nb == 14)
        my_putchar('e');
    if (nb == 15)
        my_putchar('f');
}

void my_dtoh_x(unsigned long int nb)
{
    if (nb == 10)
        my_putchar('a');
    if (nb == 11)
        my_putchar('b');
    if (nb == 12)
        my_putchar('c');
    my_dtoh_x_2(nb);
}
