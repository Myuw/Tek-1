/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** hub file for the cipher
*/

#include "cipher.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int encrypt(char *av[])
{
    matrix_t message;
    matrix_t key;
    matrix_t result;
    int size = 0;

    size = get_smallest_size(my_strlen(av[2]));
    key = str_to_matrix(av[2], size, 1);
    message = str_to_matrix(av[1], size, 0);
    if (message.error_flag || key.error_flag)
        return (84);
    printf("Key matrix:\n");
    print_matrix(key);
    printf("Encrypted message:\n");
    result = multiply_matrices(message, key);
    print_matrix_linear(result);
    free_matrix(message);
    free_matrix(key);
    free_matrix(result);
    return (0);
}

int invalid_argument(char **av)
{
    for (int i = 0; av[3][i] != '\0'; i++)
        if (av[3][i] < '0' || av[3][i] > '1')
            return (84);
    if (atoi(av[3]) == 0 || atoi(av[3]) == 1)
        return (0);
    return (0);
}

int main(int ac, char *av[])
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        USAGE;
        return (0);
    }
    if (ac != 4)
        return (84);
    if (invalid_argument(av) == 84)
        return (84);
    if (!my_strcmp(av[3], "0"))
        return (encrypt(av));
    return (0);
}
