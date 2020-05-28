/*
** EPITECH PROJECT, 2020
** defender
** File description:
** header
*/
#ifndef DEFENDER_H_
#define DEFENDER_H_

#define USAGE "pa 2 pro geai\n"

typedef struct character
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vector;
    sfIntRect rect;
    //int nb_ennemis;
    int life;
} character;

typedef struct tower
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vector;
    int is_draw;
    int gold;
} tower;

void create_main_menu(sfRenderWindow *window, sfMouseButton left_click);
int create_background(sfRenderWindow *window);
void click_on_quit(sfRenderWindow *window);
void click_on_music(sfRenderWindow *window);
void click_on_play(sfRenderWindow *window);
float clock_ennemis(void);
int move_rect(character ennemis);
character move_ennemis(character ennemis);
void create_ennemis(sfRenderWindow *window, sfSprite *bk_sprite, sfSprite *cut_tower_sp);
void game_loop(sfRenderWindow *window, sfSprite *bk_sprite, character *ennemis, sfSprite *cut_tower_sp, int nb_ennemis);
tower click_on_button_tower(sfRenderWindow *window, tower archer, int gold);
tower test_click(sfRenderWindow *window, tower archer);
void draw_magicplus_white_button(sfRenderWindow *window);
void draw_archerplus_white_button(sfRenderWindow *window);
void draw_magic_white_button(sfRenderWindow *window);
void draw_archer_white_button(sfRenderWindow *window);
void analyse_event(sfRenderWindow *window, sfEvent event, sfMouseButton left_click, tower archer[4], int gold);
character attack_tower_archer(sfRenderWindow *window, tower archer, character ennemis);
character attack_tower_archerplus(sfRenderWindow *window, tower archer, character ennemis);
character attack_tower_magicplus(sfRenderWindow *window, tower archer, character ennemis);
character attack_tower_magic(sfRenderWindow *window, tower archer, character ennemis);
void print_text(sfRenderWindow *window, int gold, int life);
int remove_gold(tower *archer, int gold);
int remove_life(int life, character *ennemis, int nb_ennemis);
void move_rect_ennemis(character *ennemis, int nb_ennemis);
void pause_menu(sfRenderWindow *window, sfMusic *music);
#endif /* DEFENDER_H_ */
