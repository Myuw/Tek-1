/*
** EPITECH PROJECT, 2020
** collision
** File description:
** rpg
*/

#include <SFML/Graphics.h>
#include <stddef.h>
#include "rpg.h"
#include "game_struct.h"

int manage_collision(game_t *game, int move)
{
    if (game->collision[0].start == true
        && manage_collision_start(game, move) == -1)
        return (-1);
    if (game->collision[0].village == true
        && manage_collision_village(game, move) == -1)
        return (-1);
    if (game->collision[0].front_castle == true
        && manage_collision_front_castle(game, move) == -1)
        return (-1);
    if (game->collision[0].first_floor == true
        && manage_collision_first_floor(game, move) == -1)
        return (-1);
    if (game->collision[0].boss == true
        && manage_collision_boss(game, move) == -1)
        return (-1);
    return (0);
}

int no_seg(game_t *game)
{
    if (game->collision[0].village == false
        && game->collision[0].front_castle == false
        && game->collision[0].first_floor == false
        && game->collision[0].boss == false)
        return (0);
    return (1);
}

void draw_shape(game_t *game, sfRenderWindow *win)
{
    if (no_seg(game) == 0)
        return ;
    if (game->collision[0].village == true)
        draw_village_collision(game, win);
    if (game->collision[0].front_castle == true)
        draw_front_castle_collision(game, win);
    if (game->collision[0].first_floor == true)
        draw_first_floor_collision(game, win);
    if (game->collision[0].boss == true)
        draw_boss_collision(game, win);
}

sfRectangleShape *set_collision(int posx, int posy, int x, int y)
{
    sfRectangleShape *shape = sfRectangleShape_create();

    sfRectangleShape_setPosition(shape, (sfVector2f) {posx, posy});
    sfRectangleShape_setSize(shape, (sfVector2f) {x, y});
    sfRectangleShape_setFillColor(shape, sfTransparent);
    return (shape);
}