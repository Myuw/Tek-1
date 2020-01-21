/*
** EPITECH PROJECT, 2020
** init_params
** File description:
** 105torus init_params
*/

#include "my.h"
#include "105torus.h"

void init_params(char **av)
{
    params_t *params = malloc(sizeof(params_t));

    params->opt = atof(av[1]);
    params->a0 = atof(av[2]);
    params->a1 = atof(av[3]);
    params->a2 = atof(av[4]);
    params->a3 = atof(av[5]);
    params->a4 = atof(av[6]);
    params->n = atof(av[7]);
    which_method(params);
}
