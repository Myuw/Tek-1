/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include <stdio.h>
#include "architect.h"
/*pas à la norme!*/
int process_operations(int ac, char **av)
{
    switch (av[3][1]) {
    case 't':
        if (mk_translation(ac, av) != 0)
            return (EXIT_FAILURE);
        break;
    case 'z':
        if (mk_scaling(ac, av) != 0)
            return (EXIT_FAILURE);
        break;
    case 'r':
        if(mk_rotation(ac, av) != 0)
            return (EXIT_FAILURE);
        break;
    case 's':
        if(mk_reflection(ac, av) != 0)
            return (EXIT_FAILURE);
        break;
    default:
        return (EXIT_FAILURE);
    }
}

int main(int ac, char **av)
{
    int nbr = 0;

    if (ac == 3)
        return (EXIT_FAILURE);
    nbr = error_handling(ac, av);
    if (nbr == EXIT_FAILURE)
        return (EXIT_FAILURE);
    else if (nbr == EXIT_SUCCESS) {
        process_operations(ac, av);
        return (EXIT_SUCCESS);
    }
}
