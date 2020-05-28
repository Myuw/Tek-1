/*
** EPITECH PROJECT, 2020
** fight fct
** File description:
** fight fct
*/
#ifndef FIGHT_FCT_H
#define FIGHT_FCT_H
#include <SFML/Graphics.h>
#include <SFML/System/Time.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "game_struct.h"

void set_for_display(game_t *game_s, sfRenderWindow *window);
void fct_fight_window(game_t *game_s, sfRenderWindow *window);
void attack_boss(game_t *game_s, int i);
void animate_fight(game_t *game_s, sfClock *c, sfTime t, int end);
int final_boss(game_t *game_s, sfRenderWindow *window);
int handle_mana(game_t *game_s, int mvt);
void attack_dragon(game_t *game_s, int i);
int move_rect(sfIntRect rect, int offset, int max_value);
int attack_mage(game_t *game_s, int i, int rect);
int fight_detection(game_t *game_s);
int check_click(game_t *game_s, sfRenderWindow *window);
void set_fight(game_t *game_s);
void display_fight2(game_t *game_s, sfRenderWindow *window);
void display_fight(game_t *game_s, sfRenderWindow *window);
int fight_window(game_t *game_s, sfRenderWindow *window);
#endif
