/*
** EPITECH PROJECT, 2019
** my_str_isnum.c
** File description:
** my_str_isnum.c
*/

int my_str_isnbr(char const *str)
{
    int i = 0;

    if (my_strlen(str) == 0)
        return (1);
    if (str[0] == '-')
        i = 1;
    for (; str[i] != '\0'; i = i + 1)
        if (str[i] < '0' || str[i] > '9')
            return (1);
    return (0);
}
