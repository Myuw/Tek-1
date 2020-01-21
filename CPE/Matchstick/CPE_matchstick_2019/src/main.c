/*
** EPITECH PROJECT, 2020
** main
** File description:
** matchstick main
*/

#include "my.h"
#include "matchstick.h"

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

int my_error(char **av)
{
    if (my_getnbr(av[1]) <= 1 || my_getnbr(av[1]) >= 100)
        return (84);
    if (my_str_is_nbr(av[1]) == -1 || my_str_is_nbr(av[2]) == -1)
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    int rtn = 0;

    if (ac != 3)
        return (MY_EXIT_FAILURE);
    if (my_error(av) == 84)
        return (MY_EXIT_FAILURE);
    rtn = print_map(av);
    if (rtn == 1) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (USER_WIN);
    } else if (rtn == 2) {
        my_putstr("You lost, too bad...\n");
        return (IA_WIN);
    } else if (rtn == -2)
        return (0);
    return (0);
}
