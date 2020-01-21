/*
** EPITECH PROJECT, 2019
** main
** File description:
** 104intersection
*/

#include "my.h"
#include "104intersection.h"

int error_handling(int ac, char **av)
{
    if (ac != 9)
        return (MY_EXIT_FAILURE);
    for (int i = 1; i != ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] == '-')
                j++;
            if (av[i][j] < '0' || av[i][j] > '9')
                return (MY_EXIT_FAILURE);
        }
    }
    if (av[1][0] < '1' || av[1][0] > '3')
        return (MY_EXIT_FAILURE);
    if (av[8][0] == '-' || av[8][0] == '0')
        return (MY_EXIT_FAILURE);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (MY_EXIT_FAILURE);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        printf(USAGE);
        return (MY_EXIT_SUCCESS);
    }
    if (error_handling(ac, av) == 84)
        return (MY_EXIT_FAILURE);
    recup_params(ac, av);
    return (MY_EXIT_SUCCESS);
}
