/*
** EPITECH PROJECT, 2019
** check_av_3
** File description:
** math
*/

#include "architect.h"

int check_t(int ac, char **av)
{
    int nbr = 0;

    if (ac != 6)
        return (EXIT_FAILURE);
    if (av[3][0] != '-')
        return (EXIT_FAILURE);
    nbr = check_args_t_z(ac, av);
    if (nbr == EXIT_FAILURE)
        return (EXIT_FAILURE);
    else
        return (EXIT_SUCCESS);
}

int check_z(int ac, char **av)
{
    int nbr = 0;

    if (ac != 6)
        return (EXIT_FAILURE);
    if (av[3][0] != '-')
        return (EXIT_FAILURE);
    nbr = check_args_t_z(ac, av);
    if (nbr == EXIT_FAILURE)
        return (EXIT_FAILURE);
    else
        return (EXIT_SUCCESS);
}

int check_r(int ac, char **av)
{
    int nbr = 0;

    if (ac != 5)
        return (EXIT_FAILURE);
    if (av[3][0] != '-')
        return (EXIT_FAILURE);
    nbr = check_args_r_s(ac, av);
    if (nbr == EXIT_FAILURE)
        return (EXIT_FAILURE);
    else
        return (EXIT_SUCCESS);
}

int check_s(int ac, char **av)
{
    int nbr = 0;

    if (ac != 5)
        return (EXIT_FAILURE);
    if (av[3][0] != '-')
        return (EXIT_FAILURE);
    nbr = check_args_r_s(ac, av);
    if (nbr == EXIT_FAILURE)
        return (EXIT_FAILURE);
    else
        return (EXIT_SUCCESS);
}

int check_av_3(int ac, char **av)
{
    int nbr = 0;

    switch (av[3][1]) {
    case 't':
        nbr = check_t(ac, av);
        return (nbr);
    case 'z':
        nbr = check_z(ac, av);
        return (nbr);
    case 'r':
        nbr = check_r(ac, av);
        return (nbr);
    case 's':
        nbr = check_s(ac, av);
        return (nbr);
    default:
        return(EXIT_FAILURE);
    }
}
