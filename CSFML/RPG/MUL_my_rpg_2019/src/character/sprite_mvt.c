/*
** EPITECH PROJECT, 2020
** mouvement
** File description:
** sprites
*/
#include "game_struct.h"
#include "fight.h"
#include "rpg.h"

void move_right(game_t *game_s)
{
    game_s->mage[0].rect.top = 100;
    game_s->mage[0].pos.x += 5;
    animate_sprites(game_s, game_s->anim.clock, game_s->anim.time);
}

void move_left(game_t *game_s)
{
    game_s->mage[0].rect.top = 50;
    game_s->mage[0].pos.x -= 5;
    animate_sprites(game_s, game_s->anim.clock, game_s->anim.time);
}

void move_down(game_t *game_s)
{
    game_s->mage[0].rect.top = 0;
    game_s->mage[0].pos.y += 5;
    animate_sprites(game_s, game_s->anim.clock, game_s->anim.time);
}

void move_up(game_t *game_s)
{
    game_s->mage[0].rect.top = 150;
    game_s->mage[0].pos.y -= 5;
    animate_sprites(game_s, game_s->anim.clock, game_s->anim.time);
}

void move_sprites(game_t *game_s)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue
        && manage_collision(game_s, 1) == 0)
        move_up(game_s);
    if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue
        && manage_collision(game_s, 2) == 0)
        move_down(game_s);
    if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue
        && manage_collision(game_s, 3) == 0)
        move_left(game_s);
    if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue
        && manage_collision(game_s, 4) == 0)
        move_right(game_s);
}
