/*
** EPITECH PROJECT, 2020
** scale
** File description:
** scale
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdlib.h>
#include "game_struct.h"
#include "lib.h"
#include "rpg.h"
#include "fight.h"
#include "fight_fct.h"
#include "inv_fct.h"

void handle_other_scale(game_t *game_s)
{
    sfVector2f scale = {1, 1};

    sfSprite_setScale(game_s->mage[0].sprite, scale);
}

void handle_frontcastle_scale(game_t *game_s)
{
    sfVector2f scale = {1.2, 1.2};
    sfVector2f pos;

    pos = sfSprite_getPosition(game_s->mage[0].sprite);
    if (pos.y <= 750) {
        scale.x = 0.7;
        scale.y = 0.7;
    }
    if (pos.y <= 800 && pos.y >= 750) {
        scale.x = 0.9;
        scale.y = 0.9;
    }
    if (pos.y <= 850 && pos.y >= 800) {
        scale.x = 1.1;
        scale.y = 1.1;
    }
    sfSprite_setScale(game_s->mage[0].sprite, scale);
}

void handle_scale(game_t *game_s)
{
    if (game_s->collision[0].start == true)
        handle_other_scale(game_s);
    if (game_s->collision[0].village == true)
        handle_other_scale(game_s);
    if (game_s->collision[0].front_castle == true)
        handle_frontcastle_scale(game_s);
    if (game_s->collision[0].first_floor == true)
        handle_other_scale(game_s);
    if (game_s->collision[0].boss == true)
        handle_other_scale(game_s);
}
