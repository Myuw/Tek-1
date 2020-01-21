/*
** EPITECH PROJECT, 2020
** 105torus
** File description:
** 105torus header
*/

#ifndef TORUS_H
#define TORUS_H

#include <math.h>

#define USAGE "USAGE\n\
    ./105torus opt a0 a1 a2 a3 a4 n\n\
\n\
DESCRIPTION\n\
    opt       method option\n\
                  1 for the bisection method\n\
                  2 for Newton's method\n\
                  3 for the secant method\n\
    a[0-4]    coefficients of the equation\n\
    n         precision (the application of the polynomial to the solution should be smaller than 10^-n)\n"

typedef struct params_s
{
    double opt;
    double a0;
    double a1;
    double a2;
    double a3;
    double a4;
    int n;
} params_t;

void init_params(char **av);

void my_error(char const *str);

void bisection_method(params_t *params);

void newton_method(params_t *params);

void secant_method(params_t *params);

double my_fx(params_t *params, double x);

double my_f_prime(params_t *params, double x);

void which_method(params_t *params);

#endif
