/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** rpg
*/

#include <SFML/Graphics.h>
#include "game_struct.h"

void destroy_sprite(sfSprite *sprite)
{
    sfSprite_destroy(sprite);
}

void close_game(sfRenderWindow *window, game_t *game)
{
    sfMusic_destroy(game->music.music);
    sfRenderWindow_close(window);
}