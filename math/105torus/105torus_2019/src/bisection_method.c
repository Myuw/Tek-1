/*
** EPITECH PROJECT, 2020
** bisection_method.c
** File description:
** 105
*/

#include "my.h"
#include "105torus.h"

void bisection_method(params_t *params)
{
    double a = 0;
    double b = 1;
    double c = 0;
    double f_a = 0;
    double f_c = 0;

    while (1) {
        c = (a + b) / 2;
        f_a = my_fx(params, a);
        f_c = my_fx(params, c);
        if ((f_a * f_c) < 0)
            b = c;
        else
            a = c;
        if (round(a * pow(10, params->n)) == round(b * pow(10, params->n)))
            break;
        printf("x = %.*g\n", params->n, c);
    }
}
