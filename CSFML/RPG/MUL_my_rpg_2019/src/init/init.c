/*
** EPITECH PROJECT, 2020
** init
** File description:
** rpg
*/

#include "game_struct.h"

void set_collision_false(game_t *game)
{
    game->view.view = sfView_create();
    game->anim.clock = sfClock_create();
    game->collision[0].village = false;
    game->collision[0].front_castle = false;
    game->collision[0].first_floor = false;
    game->collision[0].boss = false;
}