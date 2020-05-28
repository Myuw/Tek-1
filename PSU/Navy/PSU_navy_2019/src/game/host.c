/*
** EPITECH PROJECT, 2020
** host.c
** File description:
** host side
*/

#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include "my.h"
#include "navy.h"

void my_print_message(char *input)
{
    my_putstr(input);
    my_putstr(": ");
}

void host_loop(void)
{
    char *input = NULL;
    int x, y;

    while (victory(game.player_map) != 1) {
        my_putstr("attack: ");
        input = my_get_input();
        if (!input) {
            msg_send(12, 12, game.enemy_pid);
            return;
        }
        my_print_message(input);
        input_to_position(input, &x, &y);
        msg_send(x, y, game.enemy_pid);
        msg_wait();
        hit_or_missed(game.hit);
        on_attack_enemy_map(x, y, game.hit);
        if (attack_wait())
            return;
        my_print_map(game.player_map);
    }
}

int run_host(char *filepath)
{
    game.player_map = my_get_map(filepath);
    if (game.player_map == NULL)
        return (failure);
    my_putstr("waiting for enemy connection ...\n");
    msg_wait();
    usleep(6000);
    msg_send(15, 15, game.enemy_pid);
    my_print_map(game.player_map);
    host_loop();
    return (0);
}
