/*
** EPITECH PROJECT, 2020
** main
** File description:
** 105torus main function
*/

#include "my.h"
#include "105torus.h"

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

int error_handling(int ac, char **av)
{
    if (ac != 8)
        return (84);
    for (int i = 1; i != ac; i++)
        if (my_str_is_nbr(av[i]) == -1)
            return (84);
    if (av[1][0] < '1' || av[1][0] > '3')
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 8)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        printf(USAGE);
        return (0);
    }
    if (error_handling(ac, av) == 84)
        return (84);
    init_params(av);
    return (0);
}
