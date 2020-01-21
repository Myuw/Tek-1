/*
** EPITECH PROJECT, 2019
** cipher.h
** File description:
** header file for the 103cipher project
*/

#ifndef CIPHER_H
#define CIPHER_H

#include <unistd.h>
#include "my.h"

#define USAGE my_putstr("USAGE\n    ./103cipher message key flag\n\n\
DESCRIPTION\n    \
message    a message, made of ASCII characters\n    \
key        the encryption key, made of ASCII characters\n    \
flag       0 for the message to be encrypted, 1 to be decrypted\n")

typedef struct {
    int **matrix;
    int column_nbr;
    int line_nbr;
    int error_flag;
} matrix_t;

void free_matrix(matrix_t element);
void print_matrix(matrix_t element);
void print_matrix_linear(matrix_t element);
matrix_t str_to_matrix(const char *str, const int width, const int is_square);
matrix_t multiply_matrices(matrix_t e1, matrix_t e2);
int get_smallest_size(const int len);
int matrix_is_legal(matrix_t element);
int invalid_argument(char **av);

#endif
