/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "navy.h"

void init_game(void)
{
    game.enemy_pid = -1;
    game.player_map = NULL;
    game.hit = 0;
    game.x = 0;
    game.y = 0;
    game.eof = 0;
}

int run_host_client(int ac, char **av)
{
    int i = 0;

    switch (ac) {
        case 2:
            i = run_host(av[1]);
            break;
        case 3:
            i = run_client(my_stoi(av[1]), av[2]);
            break;
        default:
            my_puterr("error: wrong arguments\n");
            return (failure);
    }
    return (i);
}

int main(int ac, char **av)
{
    signal_handlers();
    init_game();
    if (ac == 2 || ac == 3) {
        my_putstr("my_pid: ");
        my_putint(getpid());
        my_putchar('\n');
    }
    if (run_host_client(ac, av) == failure)
        return (failure);
    return (success);
}
