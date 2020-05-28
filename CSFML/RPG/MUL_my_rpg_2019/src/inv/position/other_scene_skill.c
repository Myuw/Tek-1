/*
** EPITECH PROJECT, 2020
** other scene skill
** File description:
** other scene skill
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "fight_fct.h"
#include "game_struct.h"

void other_def_skill(game_t *game_s)
{
    sfVector2f pos;

    pos = sfSprite_getPosition(game_s->mage[0].sprite);
    game_s->def_s[1].pos_sk.x = pos.x - 73;
    game_s->def_s[1].pos_sk.y = pos.y + 34;
    game_s->def_s[2].pos_sk.y = pos.y + 34;
    game_s->def_s[2].pos_sk.x = pos.x - 39;
    game_s->def_s[3].pos_sk.x = pos.x - 39;
    game_s->def_s[3].pos_sk.y = pos.y + 67;
    game_s->def_s[4].pos_sk.x = pos.x - 73;
    game_s->def_s[4].pos_sk.y = pos.y + 67;
    game_s->def_s[5].pos_sk.x = pos.x - 73;
    game_s->def_s[5].pos_sk.y = pos.y + 99;
    game_s->def_s[6].pos_sk.x = pos.x - 39;
    game_s->def_s[6].pos_sk.y = pos.y + 99;
}

void other_attack_skill(game_t *game_s)
{
    sfVector2f pos;

    pos = sfSprite_getPosition(game_s->mage[0].sprite);
    game_s->atk_s[1].pos_sk.x = pos.x - 5;
    game_s->atk_s[1].pos_sk.y = pos.y + 34;
    game_s->atk_s[2].pos_sk.y = pos.y + 34;
    game_s->atk_s[2].pos_sk.x = pos.x + 29;
    game_s->atk_s[3].pos_sk.x = pos.x + 29;
    game_s->atk_s[3].pos_sk.y = pos.y + 67;
    game_s->atk_s[4].pos_sk.x = pos.x - 5;
    game_s->atk_s[4].pos_sk.y = pos.y + 67;
    game_s->atk_s[5].pos_sk.x = pos.x - 5;
    game_s->atk_s[5].pos_sk.y = pos.y + 99;
    game_s->atk_s[6].pos_sk.x = pos.x + 29;
    game_s->atk_s[6].pos_sk.y = pos.y + 99;
}

void other_speed_skill(game_t *game_s)
{
    sfVector2f pos;

    pos = sfSprite_getPosition(game_s->mage[0].sprite);
    game_s->spd_s[1].pos_sk.x = pos.x + 63;
    game_s->spd_s[1].pos_sk.y = pos.y + 34;
    game_s->spd_s[2].pos_sk.y = pos.y + 34;
    game_s->spd_s[2].pos_sk.x = pos.x + 97;
    game_s->spd_s[3].pos_sk.x = pos.x + 63;
    game_s->spd_s[3].pos_sk.y = pos.y + 67;
    game_s->spd_s[4].pos_sk.x = pos.x + 97;
    game_s->spd_s[4].pos_sk.y = pos.y + 67;
    game_s->spd_s[5].pos_sk.x = pos.x + 63;
    game_s->spd_s[5].pos_sk.y = pos.y + 99;
    game_s->spd_s[6].pos_sk.x = pos.x + 97;
    game_s->spd_s[6].pos_sk.y = pos.y + 99;
}

void set_other_skill(game_t *game_s)
{
    other_def_skill(game_s);
    other_attack_skill(game_s);
    other_speed_skill(game_s);
    for (int i = 1; i < 7; i++) {
        sfSprite_setPosition(game_s->def_s[i].sprite_sk,
        game_s->def_s[i].pos_sk);
        sfSprite_setPosition(game_s->atk_s[i].sprite_sk,
        game_s->atk_s[i].pos_sk);
        sfSprite_setPosition(game_s->spd_s[i].sprite_sk,
        game_s->spd_s[i].pos_sk);
    }
}
