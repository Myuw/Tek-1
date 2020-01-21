/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix
*/

#include "architect.h"
#include <stdlib.h>
#include <stdio.h>

void free_all(double **matrix, double *vector, double *result)
{
    free(vector);
    free(result);
    for (int lines = 0; lines < 3; lines++)
        free(matrix[lines]);
    free(matrix);
}

int mk_translation(int ac, char *av[])
{
    double **matrix = mktranslation_matrix(atof(av[4]), atof(av[5]));
    double *vector = make_homogeneous(atof(av[1]), atof(av[2]));
    double *result = transform_matrices(matrix, vector);

    if (!vector || !vector || !result)
        return (EXIT_FAILURE);
    printf("Translation along vector (%d, %d)\n", atoi(av[4]), atoi(av[5]));
    print_matrix(matrix);
    print_vector_f(vector);
    printf(" => ");
    print_vector_f(result);
    printf("\n");
    free_all(matrix, vector, result);
    return (0);
}

int mk_scaling(int ac, char *av[])
{
    double **matrix = mkscale_matrix(atof(av[4]), atof(av[5]));
    double *vector = make_homogeneous(atof(av[1]), atof(av[2]));
    double *result = transform_matrices(matrix, vector);

    if (!vector || !vector || !result)
        return (EXIT_FAILURE);
    printf("Scaling by factor %d and %d\n", atoi(av[4]), atoi(av[5]));
    print_matrix(matrix);
    print_vector_f(vector);
    printf(" => ");
    print_vector_f(result);
    printf("\n");
    free_all(matrix, vector, result);
    return (EXIT_SUCCESS);
}

int mk_rotation(int ac, char **av)
{
    double **matrix = mkrotation_matrix(atof(av[4]));
    double *vector = make_homogeneous(atof(av[1]), atof(av[2]));
    double *result = transform_matrices(matrix, vector);

    if (!vector || !vector || !result)
        return (EXIT_FAILURE);
    printf("Rotation by a %d degree angle\n", atoi(av[4]));
    print_matrix(matrix);
    print_vector_f(vector);
    printf(" => ");
    print_vector_f(result);
    printf("\n");
    free_all(matrix, vector, result);
    return (EXIT_SUCCESS);
}

int mk_reflection(int ac, char **av)
{
    double **matrix = mkreflection_matrix(atof(av[4]));
    double *vector = make_homogeneous(atof(av[1]), atof(av[2]));
    double *result = transform_matrices(matrix, vector);

    if (!vector || !vector || !result)
        return (EXIT_FAILURE);
    printf("Reflection over an axis with an inclination angle of %d degrees\n", atoi(av[4]));
    print_matrix(matrix);
    print_vector_f(vector);
    printf(" => ");
    print_vector_f(result);
    printf("\n");
    free_all(matrix, vector, result);
    return (EXIT_SUCCESS);
}
