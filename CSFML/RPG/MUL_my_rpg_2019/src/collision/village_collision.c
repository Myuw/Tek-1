/*
** EPITECH PROJECT, 2020
** village_collision
** File description:
** rpg
*/

#include <SFML/Graphics.h>
#include <stddef.h>
#include "rpg.h"
#include "game_struct.h"

void draw_village_collision(game_t *game, sfRenderWindow *win)
{
    sfRenderWindow_drawRectangleShape(win,
    game->collision[0].shape, NULL);
    sfRenderWindow_drawRectangleShape(win,
    game->collision[1].shape, NULL);
}

void set_collision_village(game_t *game)
{
    game->collision[0].village = true;
    game->collision[0].shape = set_collision(775, 35, 390, 410);
    game->collision[1].shape = set_collision(1360, 315, 480, 400);
    game->collision[2].shape = set_collision(0, 0, 1870, 1030);
}

int check_border(game_t *game, int move)
{
    sfFloatRect rect;
    sfVector2f pos;
    sfVector2f pos_mage;

    rect = sfRectangleShape_getLocalBounds(game->collision[2].shape);
    pos = sfRectangleShape_getPosition(game->collision[2].shape);
    pos_mage = sfSprite_getPosition(game->mage[0].sprite);
    move == 1 ? pos_mage.y -= 5 : pos_mage.y;
    move == 2 ? pos_mage.y += 5 : pos_mage.y;
    move == 3 ? pos_mage.x -= 5 : pos_mage.x;
    move == 4 ? pos_mage.x += 5 : pos_mage.x;
    if (pos_mage.x <= (rect.width + pos.x)
        && pos_mage.x >= (rect.left + pos.x))
        if (pos_mage.y <= (rect.height + pos.y)
            && pos_mage.y >= (rect.top + pos.y))
            return (0);
    return (-1);
}

int manage_collision_village(game_t *game, int move)
{
    sfFloatRect rect;
    sfVector2f pos;
    sfVector2f pos_mage;

    for (int i = 0; i < 2; i++) {
        rect = sfRectangleShape_getLocalBounds(game->collision[i].shape);
        pos = sfRectangleShape_getPosition(game->collision[i].shape);
        pos_mage = sfSprite_getPosition(game->mage[0].sprite);
        move == 1 ? pos_mage.y -= 5 : pos_mage.y;
        move == 2 ? pos_mage.y += 5 : pos_mage.y;
        move == 3 ? pos_mage.x -= 5 : pos_mage.x;
        move == 4 ? pos_mage.x += 5 : pos_mage.x;
        if (pos_mage.x <= (rect.width + pos.x)
            && pos_mage.x >= ((rect.left - 40) + pos.x))
            if (pos_mage.y <= (rect.height + pos.y)
                && pos_mage.y >= ((rect.top - 45) + pos.y))
                return (-1);
    }
    return (check_border(game, move));
}