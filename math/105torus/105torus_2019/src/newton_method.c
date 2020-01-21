/*
** EPITECH PROJECT, 2020
** newton_method
** File description:
** 105
*/

#include "my.h"
#include "105torus.h"

void newton_method(params_t *params)
{
    double x = 0.5;
    double xn = 0;
    double fx = 0;
    double f_prime = 0;

    for (int i = 0; i < 300; i++) {
        fx = my_fx(params, x);
        f_prime = my_f_prime(params, x);
        if (f_prime == 0)
            my_error("Division by zero.\n");
        xn = x - (fx / f_prime);
        printf("x = %.*g\n", params->n, x);
        if (round(x * pow(10, params->n)) == round(xn * pow(10, params->n)))
            break;
        x = xn;
    }
}
