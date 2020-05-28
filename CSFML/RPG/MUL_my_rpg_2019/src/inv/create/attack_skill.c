/*
** EPITECH PROJECT, 2020
** creation attack skills
** File description:
** attack skills related to inventory
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "game_struct.h"

void attack_skill_position(game_t *game_s)
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
    for (int i = 1; i < 7; i++)
        sfSprite_setPosition(game_s->atk_s[i].sprite_sk,
        game_s->atk_s[i].pos_sk);
}

void create_attack_skill(game_t *game_s)
{
    int i = 0;

    game_s->atk_s[1].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/atk1.png", NULL);
    game_s->atk_s[2].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/atk2.png", NULL);
    game_s->atk_s[3].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/atk3.png", NULL);
    game_s->atk_s[4].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/atk4.png", NULL);
    game_s->atk_s[5].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/atk5.png", NULL);
    game_s->atk_s[6].text_sk = sfTexture_createFromFile
    ("asset/inv/skill/atk6.png", NULL);
    for (i = 1; i < 7; i++) {
        game_s->atk_s[i].sprite_sk = sfSprite_create();
        sfSprite_setTexture(game_s->atk_s[i].sprite_sk,
        game_s->atk_s[i].text_sk, sfTrue);
    }
    attack_skill_position(game_s);
}

void create_attack_stat(game_t *game_s)
{
    int i = 0;

    game_s->atk_s[1].text_st = sfTexture_createFromFile
    ("asset/inv/stat/atk1.png", NULL);
    game_s->atk_s[2].text_st = sfTexture_createFromFile
    ("asset/inv/stat/atk2.png", NULL);
    game_s->atk_s[3].text_st = sfTexture_createFromFile
    ("asset/inv/stat/atk3.png", NULL);
    game_s->atk_s[4].text_st = sfTexture_createFromFile
    ("asset/inv/stat/atk4.png", NULL);
    game_s->atk_s[5].text_st = sfTexture_createFromFile
    ("asset/inv/stat/atk5.png", NULL);
    game_s->atk_s[6].text_st = sfTexture_createFromFile
    ("asset/inv/stat/atk6.png", NULL);
    for (i = 1; i < 7; i++) {
        game_s->atk_s[i].sprite_st = sfSprite_create();
        sfSprite_setTexture(game_s->atk_s[i].sprite_st,
        game_s->atk_s[i].text_st, sfTrue);
    }
}

void set_attack_obj(game_t *game_s)
{
    int i = 0;

    game_s->atk_s[1].pos_obj.x = 200;
    game_s->atk_s[1].pos_obj.y = 50;
    game_s->atk_s[2].pos_obj.x = 709;
    game_s->atk_s[2].pos_obj.y = 206;
    game_s->atk_s[3].pos_obj.x = 248;
    game_s->atk_s[3].pos_obj.y = 816;
    game_s->atk_s[4].pos_obj.x = 423;
    game_s->atk_s[4].pos_obj.y = 181;
    game_s->atk_s[5].pos_obj.x = 1253;
    game_s->atk_s[5].pos_obj.y = 355;
    game_s->atk_s[6].pos_obj.x = 559;
    game_s->atk_s[6].pos_obj.y = 254;
    for (i = 1; i < 7; i++)
        sfSprite_setPosition(game_s->atk_s[i].sprite_obj,
        game_s->atk_s[i].pos_obj);
}

void create_attack_obj(game_t *game_s)
{
    game_s->atk_s[1].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/atk1.png", NULL);
    game_s->atk_s[2].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/atk2.png", NULL);
    game_s->atk_s[3].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/atk3.png", NULL);
    game_s->atk_s[4].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/atk4.png", NULL);
    game_s->atk_s[5].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/atk5.png", NULL);
    game_s->atk_s[6].text_obj = sfTexture_createFromFile
    ("asset/inv/obj/atk6.png", NULL);
    for (int i = 1; i < 7; i++) {
        game_s->atk_s[i].sprite_obj = sfSprite_create();
        sfSprite_setTexture(game_s->atk_s[i].sprite_obj,
        game_s->atk_s[i].text_obj, sfTrue);
        game_s->atk_s[i].state = 0;
    }
    set_attack_obj(game_s);
}
