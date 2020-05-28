/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file for the generator of the dante project
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "strd.h"
#include "generator.h"

int main(int ac, char **av)
{
    bool perfect = true;

    if (ac == 4 && atoi(av[1]) > 0 && atoi(av[2]) > 0) {
        if (strcmp(av[3], "perfect") == 0)
            perfect = true;
        else {
            fprintf(stderr, "error: failed to parse arguments\n");
            return (failure);
        }
        if (generate(atoi(av[1]), atoi(av[2]), perfect))
            return (failure);
    } else if (ac == 3 && atoi(av[1]) > 0 && atoi(av[2]) > 0) {
        if (generate(atoi(av[1]), atoi(av[2]), false))
            return (failure);
    } else {
        fprintf(stderr, "error: wrong arguments\n");
        return (failure);
    }
    return (success);
}
