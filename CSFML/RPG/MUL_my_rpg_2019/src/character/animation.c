/*
** EPITECH PROJECT, 2020
** animaton
** File description:
** sprite
*/
#include "game_struct.h"
#include "rpg.h"

void win_condition(game_t *game_s, sfRenderWindow *window, sfView *view)
{
    sfSprite *sprite;
    sfTexture *texture;

    if (game_s->enemy[1].rect.top >= 240) {
        fight_cam(window, view);
        texture = sfTexture_createFromFile("asset/win.png", NULL);
        sprite = sfSprite_create();
        while (sfRenderWindow_isOpen(window)) {
            sfRenderWindow_clear(window, sfBlack);
            sfSprite_setTexture(sprite, texture, sfTrue);
            sfRenderWindow_drawSprite(window, sprite, NULL);
            sfRenderWindow_display(window);
            if (sfKeyboard_isKeyPressed(sfKeySpace))
                close_game(window, game_s);
        }
    }
}

void game_over(game_t *game_s, sfRenderWindow *window, sfView *view)
{
    sfSprite *sprite;
    sfTexture *texture;

    if (game_s->mage[1].rect.top >= 240) {
        fight_cam(window, view);
        texture = sfTexture_createFromFile("asset/game_over.png", NULL);
        sprite = sfSprite_create();
        while (sfRenderWindow_isOpen(window)) {
            sfRenderWindow_clear(window, sfBlack);
            sfSprite_setTexture(sprite, texture, sfTrue);
            sfRenderWindow_drawSprite(window, sprite, NULL);
            sfRenderWindow_display(window);
            if (sfKeyboard_isKeyPressed(sfKeySpace))
                close_game(window, game_s);
        }
    }
}

int move_rect(sfIntRect rect, int offset, int max_value)
{
    if (rect.left == max_value || rect.left == 251) {
        rect.left = 0;
    } else {
        rect.left += offset;
    }
    return (rect.left);
}

void animate_sprites(game_t *game_s, sfClock *c, sfTime t)
{
    float s;

    t = sfClock_getElapsedTime(c);
    s = t.microseconds / 100000.0;
    if (s > 2) {
        game_s->mage[0].rect.left = move_rect(game_s->mage[0].rect, 50, 100);
        sfClock_restart(c);
    }
}
