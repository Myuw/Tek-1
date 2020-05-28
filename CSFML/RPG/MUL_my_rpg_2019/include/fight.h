/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** rpg project header
*/

#ifndef FIGHT_H
#define FIGHT_H

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include "game_struct.h"

//int fight_detection(sprites_t *mage);
//void fight_window();
//void attack_mvt(sprites_t *mage, sfRenderWindow *window, animate_t animation);
void display_sprites(game_t *game_s, sfRenderWindow *window);
void handle_sprite(game_t *game_s, sfRenderWindow *window);
void animate_sprites(game_t *game_s, sfClock *c, sfTime t);
void move_sprites(game_t *game_s);
void set_sprite(game_t *game_s);
#endif
