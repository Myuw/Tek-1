/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** rpg project header
*/

#ifndef RPG_H
#define RPG_H

#include "game_struct.h"
#include <stdbool.h>

enum {
    success,
    failure = 84
};

void destroy_village(sfSprite *village_sp, sfSprite *png_quest_sp);
sfRectangleShape *set_collision(int posx, int posy, int x, int y);

int manage_collision(game_t *game_s, int move);
int manage_collision_start(game_t *game, int move);
int manage_collision_village(game_t *game, int move);
int manage_collision_front_castle(game_t *game, int move);
int manage_collision_first_floor(game_t *game, int move);
int manage_collision_boss(game_t *game, int move);

int check_pos_char_start(game_t *game_s);

void move_zone_main(sfRenderWindow *window, sfEvent event,
game_t *game_s, int change_zone);

void set_collision_false(game_t *game);

void handle_scale(game_t *game_s);

void item_get_sound(game_t *game);
void manage_music(game_t *game);
void normal_fight_music(game_t *game);
void village_music(game_t *game);
void front_castle_music(game_t *game);
void first_floor_music(game_t *game);
void boss_floor_music(game_t *game);
void boss_music(game_t *game);

void close_game(sfRenderWindow *window, game_t *game);
void initialise_game(sfRenderWindow *window);
void pause_menu(sfRenderWindow *window, sfMusic *music,
sfVector2f pos, sfView *view);
void help_window(sfRenderWindow *window);
void game_over(game_t *game_s, sfRenderWindow *window, sfView *view);
void win_condition(game_t *game_s, sfRenderWindow *window, sfView *view);
void init_cam(sfRenderWindow *win, sfView *view, sfVector2f pos);
void cam_movement(sfRenderWindow *win, sfView *view, game_t *game);
void fight_cam(sfRenderWindow *win, sfView *view);
void menu_cam(sfRenderWindow *win, sfView *view);
void village_cam(sfRenderWindow *win, sfView *view);

void draw_start_collision(game_t *game, sfRenderWindow *win);
void set_collision_start(game_t *game);
void set_collision_village(game_t *game);
void draw_village_collision(game_t *game, sfRenderWindow *win);
void draw_front_castle_collision(game_t *game, sfRenderWindow *win);
void set_collision_front_castle(game_t *game);
void draw_first_floor_collision(game_t *game, sfRenderWindow *win);
void set_collision_first_floor(game_t *game);
void draw_boss_collision(game_t *game, sfRenderWindow *win);
void set_collision_boss(game_t *game);
void draw_shape(game_t *game, sfRenderWindow *win);
void prepare_quest_loop(sfRenderWindow *window, sfEvent event, game_t *game_s);
void game_loop_village(sfRenderWindow *window,
sfEvent event, game_t *game_s, sfSprite *village_sp, sfSprite *png_quest_sp);
void destroy_sprite(sfSprite *sprite);

void change_fight_position(game_t *game_s);

void front_castle_fight(sfRenderWindow *window, game_t *game_s, sfView *view);
void manage_fight(sfRenderWindow *window, game_t *game_s, sfView *view);
void manage_game(sfRenderWindow *window, game_t *game_s,
sfSprite *sprite, sfView *view);

void prepare_start(sfRenderWindow *window, sfEvent event, game_t *game_s);
void prepare_village(sfRenderWindow *window, sfEvent event, game_t *game_s);
void prepare_front_castle(sfRenderWindow *window,
sfEvent event, game_t *game_s);
void prepare_first_floor(sfRenderWindow *window,
sfEvent event, game_t *game_s);
void prepare_front_castle_fff(sfRenderWindow *window,
sfEvent event, game_t *game_s);
void prepare_village_from_castle(sfRenderWindow *window,
sfEvent event, game_t *game_s);
void prepare_boss_floor(sfRenderWindow *window,
sfEvent event, game_t *game_s);
void prepare_first_floor_from_castle(sfRenderWindow *window,
sfEvent event, game_t *game_s);

#endif /*RPG_H*/
