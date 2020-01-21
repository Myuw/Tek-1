/*
** EPITECH PROJECT, 2020
** toolbox
** File description:
** 105
*/

#include "my.h"
#include "105torus.h"

double my_fx(params_t *params, double x)
{
    double f = 0;

    f = (params->a4 * pow(x, 4)) + (params->a3 * pow(x, 3)) +
        (params->a2 * pow(x, 2)) + (params->a1 * x) + params->a0;
    return (f);
}

double my_f_prime(params_t *params, double x)
{
    double f_prime = 0;

    f_prime = (4 * (params->a4 * pow(x, 3))) + (3 * (params->a3 * pow(x, 2))) +
        (2 * (params->a2 * x)) + params->a1;
    return(f_prime);
}
