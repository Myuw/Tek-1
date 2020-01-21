/*
** EPITECH PROJECT, 2019
** transformation.c
** File description:
** functions to make transformation matrices
*/

#include <math.h>
#include <stdlib.h>

double **mkreflection_matrix(double t)
{
    double d = t * (M_PI / 180);
    double **matrix = malloc(sizeof(double *) * 3);

    for(int i = 0; i < 3; i++) {
        matrix[i] = malloc(sizeof(double) * 3);
    }
    matrix[0][0] = cos(2 * d);
    matrix[1][0] = sin(2 * d);
    matrix[2][0] = 0;
    matrix[0][1] = sin(2 * d);
    matrix[1][1] = -cos(2 * d);
    matrix[2][1] = 0;
    matrix[0][2] = 0;
    matrix[1][2] = 0;
    matrix[2][2] = 1;
    return (matrix);
}

double **mktranslation_matrix(double i, double j)
{
    double **matrix = malloc(sizeof(double *) * 3);

    for(int i = 0; i < 3; i++) {
        matrix[i] = malloc(sizeof(double) * 3);
        if (!matrix[i])
            return (NULL);
    }
    matrix[0][0] = 1;
    matrix[1][0] = 0;
    matrix[2][0] = 0;
    matrix[0][1] = 0;
    matrix[1][1] = 1;
    matrix[2][1] = 0;
    matrix[0][2] = i;
    matrix[1][2] = j;
    matrix[2][2] = 1;
    return (matrix);
}

double **mkscale_matrix(double m, double n)
{
    double **matrix = malloc(sizeof(double *) * 3);

    for(int i = 0; i < 3; i++) {
        matrix[i] = malloc(sizeof(double) * 3);
    }
    matrix[0][0] = m;
    matrix[1][0] = 0;
    matrix[2][0] = 0;
    matrix[0][1] = 0;
    matrix[1][1] = n;
    matrix[2][1] = 0;
    matrix[0][2] = 0;
    matrix[1][2] = 0;
    matrix[2][2] = 1;
    return (matrix);
}

double **mkrotation_matrix(double t)
{
    double d = t * (M_PI / 180);
    double **matrix = malloc(sizeof(double *) * 3);

    for(int i = 0; i < 3; i++) {
        matrix[i] = malloc(sizeof(double) * 3);
    }
    matrix[0][0] = cos(d);
    matrix[1][0] = sin(d);
    matrix[2][0] = 0;
    matrix[0][1] = -sin(d);
    matrix[1][1] = cos(d);
    matrix[2][1] = 0;
    matrix[0][2] = 0;
    matrix[1][2] = 0;
    matrix[2][2] = 1;
    return (matrix);
}
