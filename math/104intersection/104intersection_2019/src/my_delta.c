/*
** EPITECH PROJECT, 2019
** delta
** File description:
** 104interection
*/

#include "104intersection.h"

void which_delta(delta_t *delta, params_t *params)
{
    delta->delta = (pow(delta->b, 2)) - (4 * delta->a * delta->c);
    if (delta->delta < 0)
        print_no_solution(params);
    if (delta->delta == 0)
        delta_eq_zero(delta, params);
    if (delta->delta > 0)
        delta_sup_zero(delta, params);
}

void delta_sup_zero(delta_t *delta, params_t *params)
{
    sol_t *sol = malloc(sizeof(sol_t));

    sol->x = ((-1 * delta->b) + (sqrt(delta->delta))) / (2 * delta->a);
    sol->y = ((-1 * delta->b) - (sqrt(delta->delta))) / (2 * delta->a);
    calc_intersection_points(delta, params, sol);
}

void delta_eq_zero(delta_t *delta, params_t *params)
{
    sol_t *sol = malloc(sizeof(sol_t));
    sol->x = (-1 * delta->b) / (2 * delta->a);
    calc_intersection_point(delta, params, sol);
}
