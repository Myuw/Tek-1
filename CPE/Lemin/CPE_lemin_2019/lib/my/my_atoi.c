/*
** EPITECH PROJECT, 2020
** my_atoi.c
** File description:
** my_atoi.c
*/

int my_atoi(char const *str)
{
    int nb = 0;
    int minus = 0;

    if (str[0] == '-')
        minus = 1;
    for (int i = minus; str[i] != '\0'; i = i + 1)
        nb = ((nb + (str[i] - '0')) * 10);
    nb = nb / 10;
    return (nb);
}
