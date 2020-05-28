/*
** EPITECH PROJECT, 2020
** main create
** File description:
** main create
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "game_struct.h"

void create_inv_menu(game_t *game_s)
{
    game_s->inv_s.pos.x = 700;
    game_s->inv_s.pos.y = 200;
    game_s->inv_s.texture = sfTexture_createFromFile
    ("asset/inv/inv1.png", NULL);
    game_s->inv_s.sprite = sfSprite_create();
    sfSprite_setTexture(game_s->inv_s.sprite,
    game_s->inv_s.texture, sfTrue);
    sfSprite_setPosition(game_s->inv_s.sprite, game_s->inv_s.pos);
}

void create_inv(game_t *game_s)
{
    create_inv_menu(game_s);
    create_defense_obj(game_s);
    create_attack_obj(game_s);
    create_speed_obj(game_s);
    create_defense_skill(game_s);
    create_attack_skill(game_s);
    create_speed_skill(game_s);
    create_defense_stat(game_s);
    create_attack_stat(game_s);
    create_speed_stat(game_s);
}
