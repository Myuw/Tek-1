/*
** EPITECH PROJECT, 2019
** print_matrix.c
** File description:
** print matrices
*/

#include <stdio.h>
#include "cipher.h"

void print_matrix_linear(matrix_t element)
{
    for (int i = 0; i < element.line_nbr; i++) {
        for (int a = 0; a < element.column_nbr; a++) {
            printf("%d", element.matrix[i][a]);
            if (a != element.column_nbr - 1)
                printf(" ");
        }
    }
    printf("\n");
}

void print_matrix(matrix_t element)
{
    for (int i = 0; i < element.line_nbr; i++) {
        for (int a = 0; a < element.column_nbr; a++) {
            printf("%d", element.matrix[i][a]);
            if (a != element.column_nbr - 1)
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
