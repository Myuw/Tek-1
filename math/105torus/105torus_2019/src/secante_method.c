/*
** EPITECH PROJECT, 2020
** secant_method
** File description:
** 105torus
*/

#include "my.h"
#include "105torus.h"

void secant_method(params_t *params)
{
    double x0 = 0;
    double x1 = 1;
    double first = 0;
    double second = 0;
    double xn = 0;
    int i = 0;

    while (round(x0 * pow(10, params->n)) != round(x1 * pow(10, params->n))) {
        i++;
        first = my_fx(params, x0);
        second = my_fx(params, x1);
        if (second - first == 0)
            my_error("Division by zero.\n");
        xn = x1 - (second * (x1 - x0) / (second - first));
        if (i == 1)
            printf("x = %.*g\n", params->n, xn);
        else
            printf("x = %.*f\n", params->n, xn);
        x0 = x1;
        x1 = xn;
    }
}
