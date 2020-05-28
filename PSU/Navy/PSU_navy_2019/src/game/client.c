/*
** EPITECH PROJECT, 2020
** client.c
** File description:
** client side
*/

#include <unistd.h>
#include "navy.h"
#include "my.h"

void client_loop(void)
{
    char *input = NULL;
    int x, y;

    while (victory(game.player_map) != 1) {
        if (attack_wait())
            return;
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
        my_print_map(game.player_map);
    }
}

int run_client(int pid, char *filepath)
{
    game.enemy_pid = pid;
    game.player_map = my_get_map(filepath);
    if (game.player_map == NULL)
        return (failure);
    msg_send(0, 0, game.enemy_pid);
    msg_wait();
    my_print_map(game.player_map);
    client_loop();
    return (0);
}
