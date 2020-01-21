/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** error_handling
*/

#include "architect.h"
#include <stdio.h>

int error_handling(int ac, char **av)
{
    int nbr = 0;
    
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        printf(USAGE_MSG);
        return (EXIT_SUCCESS);
    }
    nbr = check_av_3(ac, av);
    return (nbr);
}
