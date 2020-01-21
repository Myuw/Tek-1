/*
** EPITECH PROJECT, 2019
** toolbox
** File description:
** 104intersection
*/

#include "my.h"
#include "104intersection.h"

void calc_sphere(params_t *params)
{
    delta_t *delta = malloc(sizeof(delta_t));

    delta->a = (params->xv * params-> xv) + (params->yv * params->yv)\
        + (params->zv * params->zv);
    delta->b = 2 * ((params->xp * params-> xv) + (params->yp * params->yv)\
                    + (params->zp * params->zv));
    delta->c = (params->xp * params-> xp) + (params->yp * params->yp)\
        + (params->zp * params->zp) - pow(params->p, 2);
    which_delta(delta, params);
}

void calc_cylinder(params_t *params)
{
    delta_t *delta = malloc(sizeof(delta_t));

    delta->a = pow(params->xv, 2) + pow(params->yv, 2);
    delta->b = 2 * ((params->xp * params->xv) + (params->yp * params->yv));
    delta->c = pow(params->xp, 2) + pow(params->yp, 2) - pow(params->p, 2);
    which_delta(delta, params);
}

void calc_cone(params_t *params)
{
    delta_t *delta = malloc(sizeof(delta_t));
    double angle = tan(params->p * M_PI / 180);

    delta->a = pow(params->xv, 2) + pow(params->yv, 2) - (pow(params->zv, 2)\
                                                          * pow(angle, 2));
    delta->b = 2 * ((params->xv * params->xp) + (params->yv * params->yp)\
                    - (params->zv * params->zp * pow(angle, 2)));
    delta->c = pow(params->xp, 2) + pow(params->yp, 2) - (pow(params->zp, 2)\
                                                          * pow(angle, 2));
    which_delta(delta, params);
}
