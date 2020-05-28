/*
** EPITECH PROJECT, 2020
** texture
** File description:
** texture
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "game_struct.h"

void set_speed_texture(game_t *game_s)
{
    int i = 0;

    for (i = 1; i < 7; i++) {
        game_s->spd_s[i].pos_st.x = 1054;
        game_s->spd_s[i].pos_st.y = 436;
        game_s->spd_s[i].sprite_st = sfSprite_create();
        sfSprite_setTexture(game_s->spd_s[i].sprite_st,
        game_s->spd_s[i].text_st, sfTrue);
        sfSprite_setPosition(game_s->spd_s[i].sprite_st,
        game_s->spd_s[i].pos_st);
    }
}

void set_def_texture(game_t *game_s)
{
    int i = 0;

    for (i = 1; i < 7; i++) {
        game_s->def_s[i].pos_st.x = 1054;
        game_s->def_s[i].pos_st.y = 351;
        game_s->def_s[i].sprite_st = sfSprite_create();
        sfSprite_setTexture(game_s->def_s[i].sprite_st,
        game_s->def_s[i].text_st, sfTrue);
        sfSprite_setPosition(game_s->def_s[i].sprite_st,
        game_s->def_s[i].pos_st);
    }
}
