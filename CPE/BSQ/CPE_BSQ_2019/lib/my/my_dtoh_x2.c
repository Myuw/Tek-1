/*
** EPITECH PROJECT, 2019
** my_dtoh_X
** File description:
** aled
*/

void my_putchar(char c);

void my_dtoh_x3(unsigned long int nb)
{
    if (nb == 13)
        my_putchar('D');
    if (nb == 14)
        my_putchar('E');
    if (nb == 15)
        my_putchar('F');
}

void my_dtoh_x2(unsigned long int nb)
{
    if (nb == 10)
        my_putchar('A');
    if (nb == 11)
        my_putchar('B');
    if (nb == 12)
        my_putchar('C');
    my_dtoh_x3(nb);
}
