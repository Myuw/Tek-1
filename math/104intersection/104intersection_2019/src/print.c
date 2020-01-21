/*
** EPITECH PROJECT, 2019
** print
** File description:
** 104intersection
*/

#include "my.h"
#include "104intersection.h"

void print_no_solution(params_t *params)
{
    if (params->opt == 1)
        printf("Sphere of radius %.0f\n", params->p);
    else if (params->opt == 2)
        printf("Cylinder of radius %.0f\n", params->p);
    else if (params->opt == 3)
        printf("Cone with a %.0f degree angle\n", params->p);
    printf("Line passing through the point (%.0f, %.0f, %.0f) and parallel to the vector (%.0f, %.0f, %.0f)\n", params->xp, params->yp, params->zp, params->xv, params->yv, params->zv);
    printf("No intersection point.\n");
    free(params);
}

void print_sphere(delta_t *delta, params_t *params, position_t *position)
{
    printf("Sphere of radius %.0f\n", params->p);
    printf("Line passing through the point (%.0f, %0.f, %.0f) and parallel to the vector (%.0f, %.0f, %.0f)\n", params->xp, params->yp, params->zp, params->xv, params->yv, params->zv);
    if (delta->delta == 0) {
        printf("1 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n", position->lx, position->ly, position->lz);
    }
    else if (delta->delta > 0) {
        printf("2 intersection points:\n");
        printf("(%.3f, %.3f, %.3f)\n", position->lx, position->ly, position->lz);
        printf("(%.3f, %.3f, %.3f)\n", position->lx2, position->ly2, position->lz2);
    }
    free(delta);
    free(params);
    free(position);
}

void print_cylinder(delta_t *delta, params_t *params, position_t *position)
{
    printf("Cylinder of radius %.0f\n", params->p);
    printf("Line passing through the point (%.0f, %0.f, %.0f) and parallel to the vector (%.0f, %.0f, %.0f)\n", params->xp, params->yp, params->zp, params->xv, params->yv, params->zv);
    if (delta->delta == 0) {
        printf("1 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n", position->lx, position->ly, position->lz);
    }
    else if (delta->delta > 0) {
        printf("2 intersection points:\n");
        printf("(%.3f, %.3f, %.3f)\n", position->lx, position->ly, position->lz);
        printf("(%.3f, %.3f, %.3f)\n", position->lx2, position->ly2, position->lz2);
    }
    free(delta);
    free(params);
    free(position);
}

void print_cone(delta_t *delta, params_t *params, position_t *position)
{
    printf("Cone whith a %.0f degree angle\n", params->p);
    printf("Line passing through the point (%.0f, %0.f, %.0f) and parallel to the vector (%.0f, %.0f, %.0f)\n", params->xp, params->yp, params->zp, params->xv, params->yv, params->zv);
    if (delta->delta == 0) {
        printf("1 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n", position->lx, position->ly, position->lz);
    }
    else if (delta->delta > 0) {
        printf("2 intersection points:\n");
        printf("(%.3f, %.3f, %.3f)\n", position->lx, position->ly, position->lz);
        printf("(%.3f, %.3f, %.3f)\n", position->lx2, position->ly2, position->lz2);
    }
    free(delta);
    free(params);
    free(position);
}
