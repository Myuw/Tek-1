/*
** EPITECH PROJECT, 2020
** my_str_is_nbr
** File description:
** lib function
*/

int my_str_is_nbr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            i++;
        if (str[i] < '0' || str[i] > '9')
            return (-1);
    }
    return (0);
}
