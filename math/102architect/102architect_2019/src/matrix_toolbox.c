/*
** EPITECH PROJECT, 2019
** matrix_toolbox.c
** File description:
** a toolbox for matrices
*/

#include <stdio.h>
#include <stdlib.h>

double *make_homogeneous(double x, double y)
{
    double *result = malloc(sizeof(double) * 3);
    if(!result)
        return (NULL);
    result[0] = x;
    result[1] = y;
    result[2] = 1;
    return (result);
}

void print_matrix(double **matrix)
{
    printf("%.2f  %.2f  %.2f\n%.2f  %.2f  %.2f\n%.2f  %.2f  %.2f\n", \
    matrix[0][0], matrix[0][1], matrix[0][2], matrix[1][0], matrix[1][1], \
    matrix[1][2], matrix[2][0], matrix[2][1], matrix[2][2]);
}

void print_vector_f(double *vector)
{
    printf("(%.2f, %.2f)", vector[0], vector[1]);
}

void print_vector_i(double *vector)
{
    printf("(%.0f, %.0f)", vector[0], vector[1]);
}

double *transform_matrices(double **matrix, double *vector)
{
    double *result = malloc(sizeof(double) * 3);

    for (int line = 0; line < 3; line++) {
            result[line] = matrix[line][0] * vector[0] + matrix[line][1] \
             * vector[1] + matrix[line][2] * vector[2];
    }
    return (result);
}
