/*
** EPITECH PROJECT, 2020
** skill inventory
** File description:
** drawing skill on inventory
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "fight_fct.h"
#include "game_struct.h"

void draw_mana(sfRenderWindow *window, game_t *game_s)
{
    game_s->mage[2].pos.y = game_s->mage[0].pos.y - 200;
    game_s->mage[2].pos.x = game_s->mage[0].pos.x - 350;
    game_s->mage[1].pos.y = game_s->mage[2].pos.y + 24;
    game_s->mage[1].pos.x = game_s->mage[2].pos.x + 225;
    game_s->mage[3].pos.y = game_s->mage[2].pos.y + 50;
    game_s->mage[3].pos.x = game_s->mage[2].pos.x + 225;
    display_fight2(game_s, window);
}

int drawing_attack_inventory(sfRenderWindow *window, game_t *game_s)
{
    int i = 0;
    int check = 0;

    for (i = 1; i < 7; i++) {
        if (game_s->atk_s[i].state == 1)
            sfRenderWindow_drawSprite(window,
            game_s->atk_s[i].sprite_sk, NULL);
        check = check_attack_level(game_s);
        if (check > 0)
            sfRenderWindow_drawSprite(window,
            game_s->atk_s[check].sprite_st, NULL);
    }
    return (0);
}

int drawing_defense_inventory(sfRenderWindow *window, game_t *game_s)
{
    int i = 0;
    int check = 0;

    for (i = 1; i < 7; i++) {
        if (game_s->def_s[i].state == 1)
            sfRenderWindow_drawSprite(window,
            game_s->def_s[i].sprite_sk, NULL);
        check = check_defense_level(game_s);
        if (check > 0)
            sfRenderWindow_drawSprite(window,
            game_s->def_s[check].sprite_st, NULL);
    }
    return (0);
}

int drawing_speed_inventory(sfRenderWindow *window, game_t *game_s)
{
    int i = 0;
    int check = 0;

    for (i = 1; i < 7; i++) {
        if (game_s->spd_s[i].state == 1)
            sfRenderWindow_drawSprite(window,
            game_s->spd_s[i].sprite_sk, NULL);
        check = check_speed_level(game_s);
        if (check > 0)
            sfRenderWindow_drawSprite(window,
            game_s->spd_s[check].sprite_st, NULL);
    }
    return (0);
}


