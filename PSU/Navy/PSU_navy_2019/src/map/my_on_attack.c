/*
** EPITECH PROJECT, 2020
** my_map_attack
** File description:
** navy
*/

#include "my.h"
#include "navy.h"

int my_position(int x)
{
    int i = 0;

    for (; i < x; i++);
    return (i);
}

int on_attack(unsigned int x, unsigned int y)
{
    switch (game.player_map[y + 2][x * 2]) {
        case '2':
            game.player_map[y + 2][x * 2] = 'x';
            return (1);
        case '3':
            game.player_map[y + 2][x * 2] = 'x';
            return (1);
        case '4':
            game.player_map[y + 2][x * 2] = 'x';
            return (1);
        case '5':
            game.player_map[y + 2][x * 2] = 'x';
            return (1);
        case 'x':
            return (1);
        default:
            game.player_map[y + 2][x * 2] = 'o';
            return (0);
    }
    return (0);
}

void on_attack_enemy_map(unsigned int x, unsigned int y, int i)
{
    if (i == 0)
        game.player_map[y + 14][x * 2] = 'o';
    else if (i == 1)
        game.player_map[y + 14][x * 2] = 'x';
}
