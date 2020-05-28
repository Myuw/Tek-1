/*
** EPITECH PROJECT, 2020
** create fct
** File description:
** creation inv
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "game_struct.h"

void create_defense_stat(game_t *game_s)
{
    game_s->def_s[1].text_st = sfTexture_createFromFile
    ("asset/inv/stat/def1.png", NULL);
    game_s->def_s[2].text_st = sfTexture_createFromFile
    ("asset/inv/stat/def2.png", NULL);
    game_s->def_s[3].text_st = sfTexture_createFromFile
    ("asset/inv/stat/def3.png", NULL);
    game_s->def_s[4].text_st = sfTexture_createFromFile
    ("asset/inv/stat/def4.png", NULL);
    game_s->def_s[5].text_st = sfTexture_createFromFile
    ("asset/inv/stat/def5.png", NULL);
    game_s->def_s[6].text_st = sfTexture_createFromFile
    ("asset/inv/stat/def6.png", NULL);
    set_def_texture(game_s);
}

void defense_skill_position(game_t *game_s)
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
    for (int i = 1; i < 7; i++)
        sfSprite_setPosition(game_s->def_s[i].sprite_sk,
        game_s->def_s[i].pos_sk);
}

void create_defense_skill(game_t *game_s)
{
    int i = 0;

    game_s->def_s[1].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/def1.png", NULL);
    game_s->def_s[2].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/def2.png", NULL);
    game_s->def_s[3].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/def3.png", NULL);
    game_s->def_s[4].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/def4.png", NULL);
    game_s->def_s[5].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/def5.png", NULL);
    game_s->def_s[6].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/def6.png", NULL);
    for (i = 1; i < 7; i++) {
        game_s->def_s[i].sprite_sk = sfSprite_create();
        sfSprite_setTexture(game_s->def_s[i].sprite_sk,
        game_s->def_s[i].text_sk, sfTrue);
    }
    defense_skill_position(game_s);
}

void set_defense_obj(game_t *game_s)
{
    int i = 0;

    game_s->def_s[1].pos_obj.x = 100;
    game_s->def_s[1].pos_obj.y = 50;
    game_s->def_s[2].pos_obj.x = 1200;
    game_s->def_s[2].pos_obj.y = 800;
    game_s->def_s[3].pos_obj.x = 1200;
    game_s->def_s[3].pos_obj.y = 990;
    game_s->def_s[4].pos_obj.x = 1300;
    game_s->def_s[4].pos_obj.y = 450;
    game_s->def_s[5].pos_obj.x = 450;
    game_s->def_s[5].pos_obj.y = 950;
    game_s->def_s[6].pos_obj.x = 600;
    game_s->def_s[6].pos_obj.y = 900;
    for (i = 1; i < 7; i++)
        sfSprite_setPosition(game_s->def_s[i].sprite_obj,
        game_s->def_s[i].pos_obj);
}

void create_defense_obj(game_t *game_s)
{
    game_s->def_s[1].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/def1.png", NULL);
    game_s->def_s[2].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/def2.png", NULL);
    game_s->def_s[3].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/def3.png", NULL);
    game_s->def_s[4].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/def4.png", NULL);
    game_s->def_s[5].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/def5.png", NULL);
    game_s->def_s[6].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/def6.png", NULL);
    for (int i = 1; i < 7; i++) {
        game_s->def_s[i].sprite_obj = sfSprite_create();
        sfSprite_setTexture(game_s->def_s[i].sprite_obj,
        game_s->def_s[i].text_obj, sfTrue);
        game_s->def_s[i].state = 0;
    }
    set_defense_obj(game_s);
}
