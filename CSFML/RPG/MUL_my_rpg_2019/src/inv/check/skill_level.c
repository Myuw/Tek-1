/*
** EPITECH PROJECT, 2020
** check skill level
** File description:
** check skill level
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "game_struct.h"

int check_defense_level(game_t *game_s)
{
    int i = 0;
    int count = 0;

    for (i = 1; i < 7; i++)
        if (game_s->def_s[i].state > 0)
            count++;
    return (count);
}

int check_attack_level(game_t *game_s)
{
    int i = 0;
    int count = 0;

    for (i = 1; i < 7; i++)
        if (game_s->atk_s[i].state > 0)
            count++;
    return (count);
}

int check_speed_level(game_t *game_s)
{
    int i = 0;
    int count = 0;

    for (i = 1; i < 7; i++)
        if (game_s->spd_s[i].state > 0)
            count++;
    return (count);
}

void check_scene(game_t *game_s, sfRenderWindow *window)
{
    if (game_s->collision[0].start == true)
        drawing_skill_map(window, game_s, 1, 2);
    if (game_s->collision[0].village == true)
        drawing_skill_map(window, game_s, 2, 3);
    if (game_s->collision[0].front_castle == true)
        drawing_skill_map(window, game_s, 3, 4);
    if (game_s->collision[0].first_floor == true)
        drawing_skill_map(window, game_s, 4, 6);
    if (game_s->collision[0].boss == true)
        drawing_skill_map(window, game_s, 6, 7);
}
