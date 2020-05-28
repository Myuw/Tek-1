/*
** EPITECH PROJECT, 2020
** inv.h
** File description:
** inv.h
*/

#ifndef GAME_STRUCT_H
#define GAME_STRUCT_H

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <stdbool.h>

typedef struct inv
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
} inv_t;

typedef struct def
{
    sfSprite *sprite_obj;
    sfSprite *sprite_sk;
    sfSprite *sprite_st;
    sfTexture *text_obj;
    sfTexture *text_sk;
    sfTexture *text_st;
    sfVector2f pos_obj;
    sfVector2f pos_sk;
    sfVector2f pos_st;
    int state;
} def_t;

typedef struct atk
{
    sfSprite *sprite_obj;
    sfSprite *sprite_sk;
    sfSprite *sprite_st;
    sfTexture *text_obj;
    sfTexture *text_sk;
    sfTexture *text_st;
    sfVector2f pos_obj;
    sfVector2f pos_sk;
    sfVector2f pos_st;
    int state;
} atk_t;

typedef struct spd
{
    sfSprite *sprite_obj;
    sfSprite *sprite_sk;
    sfSprite *sprite_st;
    sfTexture *text_obj;
    sfTexture *text_sk;
    sfTexture *text_st;
    sfVector2f pos_obj;
    sfVector2f pos_sk;
    sfVector2f pos_st;
    int state;
} spd_t;

typedef struct sprite
{
    sfTexture *text;
    sfSprite *sprite;
    sfIntRect rect;
    float seconds;
    sfVector2f pos;
} sprite_t;

typedef struct time
{
    sfClock *clock;
    sfTime time;
    float seconds;
    sfEvent event;
    sfBool isEvent;
} anim_t;


typedef struct fight_mode
{
    sfTexture *text;
    sfSprite *sprite;
    sfVector2f pos;
} fight_t;

typedef struct collision_s
{
    sfRectangleShape *shape;
    bool start;
    bool village;
    bool front_castle;
    bool first_floor;
    bool boss;
} collision_t;

typedef struct music_s
{
    sfMusic *music;
    sfMusic *item;
} music_t;

typedef struct view_s
{
    sfView *view;
} view_t;

typedef struct game
{
    fight_t fight[6];
    sprite_t enemy[4];
    anim_t anim;
    inv_t inv_s;
    sprite_t mage[6];
    def_t def_s[8];
    atk_t atk_s[8];
    spd_t spd_s[8];
    collision_t collision[6];
    music_t music;
    view_t view;
} game_t;

#endif
