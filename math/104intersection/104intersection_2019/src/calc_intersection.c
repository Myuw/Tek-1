/*
** EPITECH PROJECT, 2019
** calc_intersection
** File description:
** 104intersection
*/

#include "104intersection.h"

void calc_intersection_points(delta_t *delta, params_t *params, sol_t *sol)
{
    position_t *position = malloc(sizeof(position_t));

    position->lx = params->xp + (sol->x * params->xv);
    position->ly = params->yp + (sol->x * params->yv);
    position->lz = params->zp + (sol->x * params->zv);
    position->lx2 = params->xp + (sol->y * params->xv);
    position->ly2 = params->yp + (sol->y * params->yv);
    position->lz2 = params->zp + (sol->y * params->zv);
    if (params->opt == 1)
        print_sphere(delta, params, position);
    else if (params->opt == 2)
        print_cylinder(delta, params, position);
    else if (params->opt == 3)
        print_cone(delta, params, position);
    free(sol);
}

void calc_intersection_point(delta_t *delta, params_t *params, sol_t *sol)
{
    position_t *position = malloc(sizeof(position_t));

    position->lx = params->xp + (sol->x * params->xv);
    position->ly = params->yp + (sol->x * params->yv);
    position->lz = params->zp + (sol->x * params->zv);
    if (params->opt == 1)
        print_sphere(delta, params, position);
    else if (params->opt == 2)
        print_cylinder(delta, params, position);
    else if (params->opt == 3)
        print_cone(delta, params, position);
    free(sol);
}
