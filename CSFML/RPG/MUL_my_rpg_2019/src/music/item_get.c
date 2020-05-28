/*
** EPITECH PROJECT, 2020
** item_get
** File description:
** rpg
*/

#include "game_struct.h"

void item_get_sound(game_t *game)
{
    game->music.item = sfMusic_createFromFile("asset/music/item_get.ogg");
    sfMusic_play(game->music.item);
    sfMusic_destroy(game->music.item);
}