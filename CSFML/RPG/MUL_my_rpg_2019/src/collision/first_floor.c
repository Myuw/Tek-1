/*
** EPITECH PROJECT, 2020
** first_floor
** File description:
** rpg
*/

#include <SFML/Graphics.h>
#include <stddef.h>
#include "rpg.h"
#include "game_struct.h"

void draw_first_floor_collision(game_t *game, sfRenderWindow *win)
{
    sfRenderWindow_drawRectangleShape(win,
    game->collision[0].shape, NULL);
    sfRenderWindow_drawRectangleShape(win,
    game->collision[1].shape, NULL);
    sfRenderWindow_drawRectangleShape(win,
    game->collision[2].shape, NULL);
    sfRenderWindow_drawRectangleShape(win,
    game->collision[3].shape, NULL);
    sfRenderWindow_drawRectangleShape(win,
    game->collision[4].shape, NULL);
    sfRenderWindow_drawRectangleShape(win,
    game->collision[5].shape, NULL);
}

void set_collision_first_floor(game_t *game)
{
    game->collision[0].first_floor = true;
    game->collision[0].shape = set_collision(145, 110, 350, 280);
    game->collision[1].shape = set_collision(375, 300, 55, 450);
    game->collision[2].shape = set_collision(375, 625, 1365, 405);
    game->collision[3].shape = set_collision(900, 150, 70, 530);
    game->collision[4].shape = set_collision(1580, 180, 160, 500);
    game->collision[5].shape = set_collision(1200, 180, 540, 340);
}

int manage_collision_first_floor(game_t *game, int move)
{
    sfFloatRect rect;
    sfVector2f pos;
    sfVector2f pos_mage;

    for (int i = 0; i < 6; i++) {
        rect = sfRectangleShape_getLocalBounds(game->collision[i].shape);
        pos = sfRectangleShape_getPosition(game->collision[i].shape);
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
    }
    return (-1);
}