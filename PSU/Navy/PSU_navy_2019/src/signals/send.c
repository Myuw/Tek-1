/*
** EPITECH PROJECT, 2020
** signals.c
** File description:
** signals sender
*/

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "navy.h"

void sig_send(unsigned short decimal, int pid)
{
    unsigned short mask = 8;

    for (int i = 0; i < 4; i++) {
        if (mask & decimal)
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);
        mask >>= 1;
        usleep(6000);
    }
}

int msg_send(unsigned int x, unsigned int y, int pid)
{
    if (x > 15 || y > 15)
        return (failure);
    sig_send(x, pid);
    sig_send(y, pid);
    return (success);
}
