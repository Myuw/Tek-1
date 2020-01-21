/*
** EPITECH PROJECT, 2019
** sharp_condition
** File description:
** my_printf
*/

char my_putstr(char const *str);

void sharp_condition(char c, int d)
{
    if (c == 'x' && d == 1)
        my_putstr("0x");
    if (c == 'X' && d == 1)
        my_putstr("0X");
}
