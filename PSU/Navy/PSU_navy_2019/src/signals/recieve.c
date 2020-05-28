/*
** EPITECH PROJECT, 2020
** recieve.c
** File description:
** signals recieving
*/

#include <stdlib.h>
#include <signal.h>
#include "my.h"
#include "navy.h"

void call_function(unsigned int x, unsigned int y, int pid)
{
    if (x == y) {
        if (x == 15)
            my_putstr("successfully connected\n");
        if (x == 14)
            game.hit = 1;
        if (x == 13)
            game.hit = 0;
        if (x == 12)
            game.eof = 1;
        if (x == 0 && game.enemy_pid == -1) {
            my_putstr("\nenemy connected...\n\n");
            game.enemy_pid = pid;
        }
    }
    if (x > 0 && y > 0 && x < 9 && y < 9)
        game.hit = on_attack(x, y);
}

void msg_recieve(int nbr, int pid)
{
    static int x = -1;
    static int y = -1;

    if (x != -1) {
        y = nbr;
        game.x = x;
        game.y = y;
        call_function(x, y, pid);
        x = -1;
        y = -1;
    } else
        x = nbr;
}

void handle(int sig, siginfo_t *si, void *unused)
{
    static char rec[5];
    static int i = 0;

    (void) unused;
    if (si->si_pid != game.enemy_pid && game.enemy_pid != -1)
        return;
    switch (sig) {
        case SIGUSR1:
            rec[i] = '1';
            break;
        case SIGUSR2:
            rec[i] = '0';
            break;
    }
    i++;
    if (i == 4) {
        rec[4] = '\0';
        i = 0;
        msg_recieve(binary_to_decimal(rec), si->si_pid);
    }
}

void signal_handlers(void)
{
    struct sigaction sa;

    sa.sa_flags = SA_SIGINFO;
    sigemptyset(&sa.sa_mask);
    sa.sa_sigaction = handle;
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
}
