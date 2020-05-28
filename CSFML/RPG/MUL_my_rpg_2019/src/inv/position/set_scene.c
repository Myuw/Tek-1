/*
** EPITECH PROJECT, 2020
** set scene
** File description:
** set scene
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "fight_fct.h"
#include "game_struct.h"

void position_stat(game_t *game_s)
{
    for (int i = 1; i < 7; i++) {
        game_s->def_s[i].pos_st.x = 1054;
        game_s->def_s[i].pos_st.y = 351;
        game_s->atk_s[i].pos_st.x = 1048;
        game_s->atk_s[i].pos_st.y = 397;
        game_s->spd_s[i].pos_st.x = 1054;
        game_s->spd_s[i].pos_st.y = 436;
    }
}

void set_scene_stat(game_t *game_s)
{
    sfVector2f pos;

    pos = sfSprite_getPosition(game_s->mage[0].sprite);
    for (int i = 1; i < 7; i++) {
        game_s->def_s[i].pos_st.x = pos.x + 72;
        game_s->def_s[i].pos_st.y = pos.y - 75;
        game_s->atk_s[i].pos_st.x = pos.x + 69;
        game_s->atk_s[i].pos_st.y = pos.y - 51;
        game_s->spd_s[i].pos_st.x = pos.x + 72;
        game_s->spd_s[i].pos_st.y = pos.y - 32;
        sfSprite_setPosition(game_s->def_s[i].sprite_st,
        game_s->def_s[i].pos_st);
        sfSprite_setPosition(game_s->atk_s[i].sprite_st,
        game_s->atk_s[i].pos_st);
        sfSprite_setPosition(game_s->spd_s[i].sprite_st,
        game_s->spd_s[i].pos_st);
    }
}

void set_frontfloor_skill(game_t *game_s)
{
    sfVector2f scale = {1, 1};

    attack_skill_position(game_s);
    defense_skill_position(game_s);
    speed_skill_position(game_s);
    for (int i = 1; i < 7; i++) {
        sfSprite_setScale(game_s->atk_s[i].sprite_sk, scale);
        sfSprite_setScale(game_s->def_s[i].sprite_sk, scale);
        sfSprite_setScale(game_s->spd_s[i].sprite_sk, scale);
        sfSprite_setScale(game_s->atk_s[i].sprite_st, scale);
        sfSprite_setScale(game_s->def_s[i].sprite_st, scale);
        sfSprite_setScale(game_s->spd_s[i].sprite_st, scale);
    }
}

void set_scale_scene(game_t *game_s)
{
    sfVector2f pos;
    sfVector2f scale = {0.5, 0.5};

    set_other_skill(game_s);
    set_scene_stat(game_s);
    pos = sfSprite_getPosition(game_s->mage[0].sprite);
    pos.x -= 105;
    pos.y -= 150;
    sfSprite_setScale(game_s->inv_s.sprite, scale);
    for (int i = 1; i < 7; i++) {
        sfSprite_setScale(game_s->atk_s[i].sprite_st, scale);
        sfSprite_setScale(game_s->def_s[i].sprite_st, scale);
        sfSprite_setScale(game_s->spd_s[i].sprite_st, scale);
        sfSprite_setScale(game_s->atk_s[i].sprite_sk, scale);
        sfSprite_setScale(game_s->def_s[i].sprite_sk, scale);
        sfSprite_setScale(game_s->spd_s[i].sprite_sk, scale);
    }
    sfSprite_setPosition(game_s->inv_s.sprite, pos);
}

void set_frontcastle_scale(game_t *game_s)
{
    sfVector2f scale;
    sfVector2f pos;

    set_front_castle(game_s);
    scale.x = 1;
    scale.y = 1;
    pos.x = 700;
    pos.y = 200;
    sfSprite_setScale(game_s->inv_s.sprite, scale);
    set_frontfloor_skill(game_s);
    sfSprite_setPosition(game_s->inv_s.sprite, pos);
}
