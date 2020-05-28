/*
** EPITECH PROJECT, 2020
** fight settings
** File description:
** fight settings
*/
#include "game_struct.h"
#include "fight_fct.h"
#include "inv_fct.h"
#include <stdio.h>

void set_for_display(game_t *game_s, sfRenderWindow *window)
{
    sfSprite_setTexture(game_s->fight[0].sprite, game_s->fight[0].text, sfTrue);
    sfRenderWindow_drawSprite(window, game_s->fight[0].sprite, NULL);
    sfSprite_setPosition(game_s->mage[5].sprite, game_s->mage[5].pos);
    sfSprite_setTexture(game_s->mage[5].sprite, game_s->mage[5].text, sfTrue);
    sfSprite_setTextureRect(game_s->mage[5].sprite, game_s->mage[5].rect);
    sfRenderWindow_drawSprite(window, game_s->mage[5].sprite, NULL);
}

void fct_fight_window(game_t *game_s, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
    check_click(game_s, window);
    display_fight(game_s, window);
    attack_dragon(game_s, 0);
}
