/*
** EPITECH PROJECT, 2020
** boss
** File description:
** boss
*/
#include "game_struct.h"
#include "fight_fct.h"
#include "inv_fct.h"
#include <stdio.h>

void display_boss_fight2(game_t *game_s, sfRenderWindow *window)
{
    for (int i = 1; i < 5; i++) {
        sfSprite_setPosition(game_s->fight[i].sprite, game_s->fight[i].pos);
        sfSprite_setTexture(game_s->fight[i].sprite,
                            game_s->fight[i].text, sfTrue);
        sfRenderWindow_drawSprite(window, game_s->fight[i].sprite, NULL);
    }
}

void display_boss_fight(game_t *game_s, sfRenderWindow *window)
{
    sfSprite_setTexture(game_s->fight[0].sprite, game_s->fight[0].text, sfTrue);
    sfRenderWindow_drawSprite(window, game_s->fight[0].sprite, NULL);
    sfSprite_setPosition(game_s->mage[5].sprite, game_s->mage[5].pos);
    sfSprite_setTexture(game_s->mage[5].sprite, game_s->mage[5].text, sfTrue);
    sfSprite_setTextureRect(game_s->mage[5].sprite, game_s->mage[5].rect);
    sfRenderWindow_drawSprite(window, game_s->mage[5].sprite, NULL);
    for (int i = 1; i != 4; i++) {
        if (i == 2)
            continue;
        sfSprite_setPosition(game_s->enemy[i].sprite, game_s->enemy[i].pos);
        sfSprite_setTexture(game_s->enemy[i].sprite,
                            game_s->enemy[i].text, sfTrue);
        sfSprite_setTextureRect(game_s->enemy[i].sprite, game_s->enemy[i].rect);
        sfRenderWindow_drawSprite(window, game_s->enemy[i].sprite, NULL);
    }
    display_boss_fight2(game_s, window);
    display_fight2(game_s, window);
}

void attack_boss(game_t *game_s, int i)
{
    static int mvt = 0;
    float s;

    if (i == 1)
        mvt = 1;
    if (mvt != 0) {
        game_s->anim.time = sfClock_getElapsedTime(game_s->anim.clock);
        s = game_s->anim.time.microseconds / 100000.0;
        if (s > 2) {
            game_s->enemy[3].rect.left =
                move_rect(game_s->enemy[3].rect, 520, 2080);
            sfClock_restart(game_s->anim.clock);
        }
    }
    if (game_s->enemy[3].rect.left == 2080) {
        mvt = 0;
        game_s->enemy[3].rect.left = 0;
        game_s->mage[1].rect.top += 40;
    }
}

int final_boss(game_t *game_s, sfRenderWindow *window)
{
    game_s->enemy[2].pos.x = 900;
    game_s->enemy[2].pos.y = 300;
    while (1) {
        if (sfKeyboard_isKeyPressed(sfKeyM)) {
            return (0);
        }
        sfRenderWindow_clear(window, sfBlack);
        check_click(game_s, window);
        display_boss_fight(game_s, window);
        attack_boss(game_s, 0);
        if (attack_mage(game_s, 0, 0) == -1)
            return (0);
        if (game_s->mage[1].rect.top >= 240 ||
            game_s->enemy[1].rect.top >= 240) {
            return (0);
        }
        sfRenderWindow_display(window);
    }
}
