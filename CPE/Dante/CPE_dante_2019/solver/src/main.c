/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include "strd.h"
#include "solver.h"

int error_handling(int ac)
{
    if (ac != 2)
        return (failure);
    return (success);
}

int main(int ac, char **av)
{
    if (error_handling(ac) == 84)
        return (failure);
    if (open_read_file(av[1]) == -1)
        return (failure);
    return (success);
}
