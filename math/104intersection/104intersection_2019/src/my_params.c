/*
** EPITECH PROJECT, 2019
** my_params
** File description:
** 104intersection
*/

#include "104intersection.h"

void recup_params(int ac, char **av)
{
    params_t *params = malloc(sizeof(params_t));

    params->opt = atoi(av[1]);
    params->xp = atof(av[2]);
    params->yp = atof(av[3]);
    params->zp = atof(av[4]);
    params->xv = atof(av[5]);
    params->yv = atof(av[6]);
    params->zv = atof(av[7]);
    params->p = atof(av[8]);
    which_params(params);
}

void which_params(params_t *params)
{
    if (params->opt == 1)
        calc_sphere(params);
    else if (params->opt == 2)
        calc_cylinder(params);
    else if (params->opt == 3)
        calc_cone(params);
}
