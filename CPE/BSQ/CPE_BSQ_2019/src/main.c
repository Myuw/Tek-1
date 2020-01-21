/*
** EPITECH PROJECT, 2019
** main
** File description:
** bsq
*/

#include "bsq.h"
#include "my.h"

int main(int ac, char **av)
{
    if (error_handling(ac) == 84)
        return (84);
    if (open_read_file(av) == 84)
        return (84);
    return (0);
}
