/*
** EPITECH PROJECT, 2020
** inv_fct
** File description:
** inv_fct
*/
#ifndef INV_FCT_H
#define INV_FCT_H
#include <SFML/Graphics.h>
#include <SFML/System/Time.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "game_struct.h"

void set_speed_texture(game_t *game_s);
void set_def_texture(game_t *game_s);
void set_front_castle(game_t *game_s);
void set_other_skill(game_t *game_s);
void set_scale_scene(game_t *game_s);
void set_frontcastle_scale(game_t *game_s);
void position_stat(game_t *game_s);
void create_attack_stat(game_t *game_s);
void attack_skill_position(game_t *game_s);
void create_attack_skill(game_t *game_s);
void create_attack_obj(game_t *game_s);
void defense_skill_position(game_t *game_s);
void create_defense_skill(game_t *game_s);
void create_defense_obj(game_t *game_s);
void create_defense_stat(game_t *game_s);
void speed_skill_position(game_t *game_s);
void create_speed_skill(game_t *game_s);
void create_speed_obj(game_t *game_s);
void create_speed_stat(game_t *game_s);
void create_inv_menu(game_t *game_s);
void create_inv(game_t *game_s);
int check_defense_level(game_t *game_s);
int check_attack_level(game_t *game_s);
int check_speed_level(game_t *game_s);
void check_scene(game_t *game_s, sfRenderWindow *window);
int drawing_attack_inventory(sfRenderWindow *window, game_t *game_s);
int drawing_defense_inventory(sfRenderWindow *window, game_t *game_s);
int drawing_speed_inventory(sfRenderWindow *window, game_t *game_s);
int check_inv_skill(sfSprite *sprite, game_t *game_s);
int check_click_skill(sfRenderWindow *window, sfSprite *sprite);
int drawing_skill_map(sfRenderWindow *window, game_t *game_s, int beg, int end);
int display_inv(sfRenderWindow *window, game_t *game_s);
void draw_mana(sfRenderWindow *window, game_t *game_s);
#endif
