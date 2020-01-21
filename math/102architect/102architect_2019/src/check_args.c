/*
** EPITECH PROJECT, 2019
** check_args
** File description:
** math
*/

#include "architect.h"

int check_args_r_s(int ac, char **av)
{
    int i = 0;

    for (i = 1; av[i] != av[3]; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] != '-' && (av[i][j] < '0' || av[i][j] > '9'))
                return (EXIT_FAILURE);
        }
    }
    for (i = 4; av[i] != av[5]; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] != '-' && (av[i][j] < '0' || av[i][j] > '9'))
                return (EXIT_FAILURE);
        }
    }
    return (EXIT_SUCCESS);
}

int check_args_t_z(int ac, char **av)
{
    int i = 0;

    for (i = 1; av[i] != av[3]; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] != '-' && (av[i][j] < '0' || av[i][j] > '9'))
                return (EXIT_FAILURE);
        }
    }
    for (i = 4; av[i] != av[6]; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] != '-' && (av[i][j] < '0' || av[i][j] > '9'))
                return (EXIT_FAILURE);
        }
    }
    return (EXIT_SUCCESS);
}
