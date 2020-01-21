/*
** EPITECH PROJECT, 2020
** which_method
** File description:
** 105
*/

#include "my.h"
#include "105torus.h"

void which_method(params_t *params)
{
    if (params->opt == 1)
        bisection_method(params);
    else if (params->opt == 2)
        newton_method(params);
    else if (params->opt == 3)
        secant_method(params);
}
