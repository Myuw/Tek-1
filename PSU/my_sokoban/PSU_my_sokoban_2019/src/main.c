/*
** EPITECH PROJECT, 2019
** main
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"

void print_usage(void)
{
    my_putstr(USAGE);
}

int error_handling(int ac)
{
    if (ac != 2)
        return (MY_EXIT_FAILURE);
    else
        return (MY_EXIT_SUCCESS);
}

int main(int ac, char **av)
{
    int exit = 0;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        print_usage();
    exit = error_handling(ac);
    if (exit == MY_EXIT_SUCCESS) {
        exit = open_file(av);
        if (exit == MY_EXIT_SUCCESS)
            return (MY_EXIT_SUCCESS);
    }
    return (MY_EXIT_FAILURE);
}
