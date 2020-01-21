/*
** EPITECH PROJECT, 2019
** load_destroy_matrix.c
** File description:
** some function used to create, load and destroy integer matrices
*/

#include "cipher.h"
#include <stdlib.h>
#include <string.h>

int get_smallest_size(const int len)
{
    int size = 1;
    while (size*size < len)
        size++;
    return (size);
}

matrix_t init_matrix(const int len, const int width, const int is_square)
{
    matrix_t result = {NULL, width, 0, 0};

    if (len == 0)
        result.error_flag = 1;
    if (is_square)
        result.line_nbr = width;
    else if (len % width != 0) {
            result.line_nbr = len / width + 1;
    } else {
            result.line_nbr = len / width;
    }
    result.matrix = malloc(sizeof(int *) * result.line_nbr);
    if (!result.matrix)
        result.error_flag = 1;
    return (result);
}

matrix_t str_to_matrix(const char *str, const int width, const int is_square)
{
    const int len = my_strlen(str);
    int p = 0;
    matrix_t element = init_matrix(len, width, is_square);

    for (int i = 0; i < element.line_nbr; i++) {
        element.matrix[i] = malloc(sizeof(int) * element.column_nbr);
        memset(element.matrix[i], 0, sizeof(int) * element.column_nbr);
        for (int a = 0; a < element.column_nbr; a++) {
            element.matrix[i][a] = str[p];
            if (str[p] == '\0')
                break;
            p++;
        }
    }
    return (element);
}

void free_matrix(matrix_t element)
{
    for (int i = 0; i < element.line_nbr; i++) {
        free(element.matrix[i]);
    }
    free(element.matrix);
}
