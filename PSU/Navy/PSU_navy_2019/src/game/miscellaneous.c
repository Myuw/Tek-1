/*
** EPITECH PROJECT, 2020
** miscellaneous.c
** File description:
** other stuff
*/

#include <unistd.h>
#include <stdio.h>
#include "my.h"
#include "navy.h"

int attack_wait(void)
{
    my_putstr("waiting for enemy's attack...\n");
    msg_wait();
    if (game.eof == 1) {
        return (1);
    }
    my_putchar(game.x + 64);
    my_putint(game.y);
    my_putstr(": ");
    hit_or_missed(game.hit);
    usleep(6000);
    if (game.hit == 1)
        msg_send(14, 14, game.enemy_pid);
    else
        msg_send(13, 13, game.enemy_pid);
    return (0);
}

int my_check_input(char *input)
{
    if (input == NULL)
        return (-1);
    if (my_strlen(input) != 2)
        return (-1);
    if (input[0] < 'A' || input[0] > 'H')
        return (-1);
    if (input[1] < '1' || input[1] > '8')
        return (-1);
    return (0);
}

void input_to_position(char *input, int *x, int *y)
{
    *x = input[0] - 64;
    *y = input[1] - 48;
}

char *my_get_input(void)
{
    char *input = NULL;
    size_t buffsize = 0;
    int i = 0;
    int j = 0;

    while (my_check_input(input) == -1 || i == -1) {
        if (j > 0) {
            my_putstr("wrong position\n");
            my_putstr("attack: ");
        }
        i = getline(&input, &buffsize, stdin);
        if (i != -1) {
            for (i = 0; input[i] != '\n'; i++);
            input[i] = '\0';
            j++;
        } else if (i == -1) {
            return (NULL);
        }
    }
    return (input);
}

void hit_or_missed(int i)
{
    if (i == 0)
        my_putstr("missed\n\n");
    else if (i == 1)
        my_putstr("hit\n\n");
}
