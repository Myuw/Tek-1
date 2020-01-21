/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** header
*/

#ifndef INTERSECTION
#define INTERSECTION

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define USAGE "USAGE\n\
    ./104intersection opt xp yp zp xv yv zv p\n\
\n\
DESCRIPTION\n\
    opt             surface option: 1 for a sphere, 2 for a cylinder, 3 for a cone\n\
    (xp, yp, zp)    coordinates of a point by which the light ray passes through\n\
    (xv, yv, zv)    coordinates of a vector parallel to the light ray\n\
    p               parameter: radius of the sphere, radius of the cylinder, or angle formed by the cone and the Z-axis\n"

#define MY_EXIT_FAILURE 84
#define MY_EXIT_SUCCESS 0

typedef struct delta_s
{
    double a;
    double b;
    double c;
    double delta;
} delta_t;

typedef struct sol_s
{
    double x;
    double y;
} sol_t;

typedef struct position_s
{
    double lx;
    double ly;
    double lz;
    double lx2;
    double ly2;
    double lz2;
} position_t;

typedef struct params_s
{
    int opt;
    double xp;
    double yp;
    double zp;
    double xv;
    double yv;
    double zv;
    double p;
} params_t;

void recup_params(int ac, char **av);

void which_params(params_t *params);

void which_delta(delta_t *delta, params_t *params);

void delta_sup_zero(delta_t *delta, params_t *params);

void delta_eq_zero(delta_t *delta, params_t *params);

void calc_intersection_points(delta_t *delta, params_t *params, sol_t *sol);

void calc_intersection_point(delta_t *delta, params_t *params, sol_t *sol);

void print_sphere(delta_t *delta, params_t *params, position_t *position);

void print_cylinder(delta_t *delta, params_t *params, position_t *position);

void print_cone(delta_t *delta, params_t *params, position_t *position);

void calc_sphere(params_t *params);

void calc_cylinder(params_t *params);

void calc_cone(params_t *params);

void print_no_solution(params_t *params);

#endif
