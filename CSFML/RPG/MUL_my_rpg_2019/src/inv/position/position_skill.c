/*
** EPITECH PROJECT, 2020
** position skill
** File description:
** position skill
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "fight_fct.h"
#include "game_struct.h"

void position_attack_skill(game_t *game_s)
{
    game_s->atk_s[1].pos_sk.x = 900;
    game_s->atk_s[1].pos_sk.y = 568;
    game_s->atk_s[2].pos_sk.y = 568;
    game_s->atk_s[2].pos_sk.x = 968;
    game_s->atk_s[3].pos_sk.x = 968;
    game_s->atk_s[3].pos_sk.y = 634;
    game_s->atk_s[4].pos_sk.y = 634;
    game_s->atk_s[4].pos_sk.x = 900;
    game_s->atk_s[5].pos_sk.x = 900;
    game_s->atk_s[5].pos_sk.y = 699;
    game_s->atk_s[6].pos_sk.y = 699;
    game_s->atk_s[6].pos_sk.x = 968;
}

void position_defense_skill(game_t *game_s)
{
    game_s->def_s[1].pos_sk.x = 763;
    game_s->def_s[1].pos_sk.y = 568;
    game_s->def_s[2].pos_sk.y = 568;
    game_s->def_s[2].pos_sk.x = 831;
    game_s->def_s[3].pos_sk.x = 831;
    game_s->def_s[3].pos_sk.y = 634;
    game_s->def_s[4].pos_sk.y = 634;
    game_s->def_s[4].pos_sk.x = 763;
    game_s->def_s[5].pos_sk.x = 763;
    game_s->def_s[5].pos_sk.y = 699;
    game_s->def_s[6].pos_sk.y = 699;
    game_s->def_s[6].pos_sk.x = 831;
}

void position_speed_skill(game_t *game_s)
{
    game_s->spd_s[1].pos_sk.x = 1104;
    game_s->spd_s[1].pos_sk.y = 568;
    game_s->spd_s[2].pos_sk.y = 568;
    game_s->spd_s[2].pos_sk.x = 1035;
    game_s->spd_s[3].pos_sk.x = 1035;
    game_s->spd_s[3].pos_sk.y = 634;
    game_s->spd_s[4].pos_sk.y = 634;
    game_s->spd_s[4].pos_sk.x = 1104;
    game_s->spd_s[5].pos_sk.x = 1035;
    game_s->spd_s[5].pos_sk.y = 699;
    game_s->spd_s[6].pos_sk.y = 699;
    game_s->spd_s[6].pos_sk.x = 1104;
}

void set_front_castle(game_t *game_s)
{
    position_attack_skill(game_s);
    position_defense_skill(game_s);
    position_speed_skill(game_s);
    position_stat(game_s);
    for (int i = 1; i < 7; i++) {
        sfSprite_setPosition(game_s->atk_s[i].sprite_sk,
        game_s->atk_s[i].pos_sk);
        sfSprite_setPosition(game_s->def_s[i].sprite_sk,
        game_s->def_s[i].pos_sk);
        sfSprite_setPosition(game_s->spd_s[i].sprite_sk,
        game_s->spd_s[i].pos_sk);
        sfSprite_setPosition(game_s->spd_s[i].sprite_st,
        game_s->spd_s[i].pos_st);
        sfSprite_setPosition(game_s->def_s[i].sprite_st,
        game_s->def_s[i].pos_st);
        sfSprite_setPosition(game_s->atk_s[i].sprite_st,
        game_s->atk_s[i].pos_st);
    }
}
