/*
** EPITECH PROJECT, 2019
** matrix_operations.c
** File description:
** basic output and modifier functions for integer matrices
*/

#include <stdio.h>
#include "cipher.h"
#include <unistd.h>
#include <stdlib.h>

int matrices_are_multipliable(matrix_t e1, matrix_t e2)
{
    return (e1.column_nbr == e2.line_nbr);
}

int get_matrix_item(int y, int x, matrix_t e1, matrix_t e2)
{
    int result = 0;

    for (int i = 0; i < e1.column_nbr; i++)
        result += e1.matrix[y][i] * e2.matrix[i][x];
    return (result);
}

matrix_t multiply_matrices(matrix_t e1, matrix_t e2)
{
    matrix_t result = {NULL, e2.column_nbr, e1.line_nbr, 0};

    if (!matrices_are_multipliable(e1, e2))
        result.error_flag = 1;
    result.matrix = malloc(sizeof(int *) * e1.line_nbr);
    for (int i = 0; i < e1.line_nbr; i++) {
        result.matrix[i] = malloc(sizeof(int) * e2.column_nbr);
        for (int a = 0; a < e2.column_nbr; a++) {
            result.matrix[i][a] = get_matrix_item(i, a, e1, e2);
        }
    }
    return (result);
}

int matrix_is_legal(matrix_t element)
{
    return (element.line_nbr == 3 && element.column_nbr == 3);
}
