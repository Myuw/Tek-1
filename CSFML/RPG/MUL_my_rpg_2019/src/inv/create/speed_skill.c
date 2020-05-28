/*
** EPITECH PROJECT, 2020
** speed skill
** File description:
** speed skill
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "game_struct.h"

void create_speed_stat(game_t *game_s)
{
    game_s->spd_s[1].text_st = sfTexture_createFromFile
    ("asset/inv/stat/spd1.png", NULL);
    game_s->spd_s[2].text_st = sfTexture_createFromFile
    ("asset/inv/stat/spd2.png", NULL);
    game_s->spd_s[3].text_st = sfTexture_createFromFile
    ("asset/inv/stat/spd3.png", NULL);
    game_s->spd_s[4].text_st = sfTexture_createFromFile
        ("asset/inv/stat/spd4.png", NULL);
    game_s->spd_s[5].text_st = sfTexture_createFromFile
    ("asset/inv/stat/spd5.png", NULL);
    game_s->spd_s[6].text_st = sfTexture_createFromFile
    ("asset/inv/stat/spd6.png", NULL);
    set_speed_texture(game_s);
}

void set_speed_obj(game_t *game_s)
{
    int i = 0;

    game_s->spd_s[1].pos_obj.x = 500;
    game_s->spd_s[1].pos_obj.y = 300;
    game_s->spd_s[2].pos_obj.x = 300;
    game_s->spd_s[2].pos_obj.y = 900;
    game_s->spd_s[3].pos_obj.x = 1740;
    game_s->spd_s[3].pos_obj.y = 846;
    game_s->spd_s[4].pos_obj.x = 1700;
    game_s->spd_s[4].pos_obj.y = 800;
    game_s->spd_s[5].pos_obj.x = 1253;
    game_s->spd_s[5].pos_obj.y = 255;
    game_s->spd_s[6].pos_obj.x = 1250;
    game_s->spd_s[6].pos_obj.y = 300;
    for (i = 1; i < 7; i++)
        sfSprite_setPosition(game_s->spd_s[i].sprite_obj,
        game_s->spd_s[i].pos_obj);
}

void create_speed_obj(game_t *game_s)
{
    game_s->spd_s[1].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/spd1.png", NULL);
    game_s->spd_s[2].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/spd2.png", NULL);
    game_s->spd_s[3].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/spd3.png", NULL);
    game_s->spd_s[4].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/spd4.png", NULL);
    game_s->spd_s[5].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/spd5.png", NULL);
    game_s->spd_s[6].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/spd6.png", NULL);
    for (int i = 1; i < 7; i++) {
        game_s->spd_s[i].sprite_obj = sfSprite_create();
        sfSprite_setTexture(game_s->spd_s[i].sprite_obj,
        game_s->spd_s[i].text_obj, sfTrue);
        game_s->spd_s[i].state = 0;
    }
    set_speed_obj(game_s);
}

void speed_skill_position(game_t *game_s)
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
    for (int i = 1; i < 7; i++)
        sfSprite_setPosition(game_s->spd_s[i].sprite_sk,
        game_s->spd_s[i].pos_sk);
}

void create_speed_skill(game_t *game_s)
{
    int i = 0;

    game_s->spd_s[1].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/spd1.png", NULL);
    game_s->spd_s[2].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/spd2.png", NULL);
    game_s->spd_s[3].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/spd3.png", NULL);
    game_s->spd_s[4].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/spd4.png", NULL);
    game_s->spd_s[5].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/spd5.png", NULL);
    game_s->spd_s[6].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/spd6.png", NULL);
    for (i = 1; i < 7; i++) {
        game_s->spd_s[i].sprite_sk = sfSprite_create();
        sfSprite_setTexture(game_s->spd_s[i].sprite_sk,
        game_s->spd_s[i].text_sk, sfTrue);
    }
    speed_skill_position(game_s);
}
