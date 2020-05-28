/*
** EPITECH PROJECT, 2020
** fight
** File description:
** window
*/
#include "game_struct.h"
#include "fight_fct.h"
#include "inv_fct.h"
#include <stdio.h>

void display_fight2(game_t *game_s, sfRenderWindow *window)
{
    for (int i = 2; i != 4; i++) {
        sfSprite_setPosition(game_s->mage[i].sprite, game_s->mage[i].pos);
        sfSprite_setTexture(game_s->mage[i].sprite,
                            game_s->mage[i].text, sfTrue);
        if ( i != 2)
            sfSprite_setTextureRect(game_s->mage[i].sprite,
                                    game_s->mage[i].rect);
        sfRenderWindow_drawSprite(window, game_s->mage[i].sprite, NULL);
    }
    sfSprite_setPosition(game_s->mage[1].sprite, game_s->mage[1].pos);
    sfSprite_setTexture(game_s->mage[1].sprite, game_s->mage[1].text, sfTrue);
    sfSprite_setTextureRect(game_s->mage[1].sprite, game_s->mage[1].rect);
    sfRenderWindow_drawSprite(window, game_s->mage[1].sprite, NULL);
}

void display_fight(game_t *game_s, sfRenderWindow *window)
{
    int i = 0;

    set_for_display(game_s, window);
    for (i = 0; i != 2; i++) {
        sfSprite_setPosition(game_s->enemy[i].sprite, game_s->enemy[i].pos);
        sfSprite_setTexture(game_s->enemy[i].sprite, game_s->enemy[i].text,
        sfTrue);
        sfSprite_setTextureRect(game_s->enemy[i].sprite, game_s->enemy[i].rect);
        sfRenderWindow_drawSprite(window, game_s->enemy[i].sprite, NULL);
    }
    for (i = 1; i < 5; i++) {
        sfSprite_setPosition(game_s->fight[i].sprite, game_s->fight[i].pos);
        sfSprite_setTexture(game_s->fight[i].sprite,
        game_s->fight[i].text, sfTrue);
        sfRenderWindow_drawSprite(window, game_s->fight[i].sprite, NULL);
    }
    display_fight2(game_s, window);
}

int check_click(game_t *game_s, sfRenderWindow *window)
{
    if (check_click_skill(window, game_s->fight[1].sprite) == 1) {
        attack_mage(game_s, 1, 0);
        return (0);
    }
    if (check_click_skill(window, game_s->fight[2].sprite) == 1) {
        attack_mage(game_s, 1, 4050);
        return (0);
    }
    if (check_click_skill(window, game_s->fight[3].sprite) == 1) {
        return (0);
    }
    if (check_click_skill(window, game_s->fight[4].sprite) == 1) {
        attack_mage(game_s, 2, 4050);
        return (0);
    }
    return (0);
}

void set_position2(game_t *game_s)
{
    game_s->mage[2].pos.x = 30;
    game_s->mage[2].pos.y = 900;
    game_s->mage[1].pos.y = game_s->mage[2].pos.y + 24;
    game_s->mage[1].pos.x = game_s->mage[2].pos.x + 225;
    game_s->mage[3].pos.y = game_s->mage[2].pos.y + 50;
    game_s->mage[3].pos.x = game_s->mage[2].pos.x + 225;
}

int fight_window(game_t *game_s, sfRenderWindow *window)
{
    while (1) {
        if (sfKeyboard_isKeyPressed(sfKeyM)) {
            return (0);
        }
        fct_fight_window(game_s, window);
        if (attack_mage(game_s, 0, 0) == -1) {
            game_s->mage[0].pos.x -= 100;
            game_s->mage[0].pos.y += 100;
            game_s->enemy[1].rect.top = 0;
            return (0);
        }
        if (game_s->mage[1].rect.top >= 240 ||
            game_s->enemy[1].rect.top >= 240) {
            game_s->enemy[1].rect.top = 0;
            game_s->mage[4].pos.y = -1000;
            return (0);
        }
        sfRenderWindow_display(window);
    }
}
