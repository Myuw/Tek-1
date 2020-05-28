/*
** EPITECH PROJECT, 2020
** first_floor.c
** File description:
** first floor
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdlib.h>
#include "game_struct.h"
#include "lib.h"
#include "rpg.h"
#include "fight.h"
#include "fight_fct.h"
#include "inv_fct.h"

int check_pos_char_first_floor(game_t *game_s)
{
    if (game_s->mage[0].pos.y <= 150
        && game_s->mage[0].pos.x > 880
        && game_s->mage[0].pos.y < 975)
        return 1;
    if (game_s->mage[0].pos.y >= 1000
        && game_s->mage[0].pos.x >= 880
        && game_s->mage[0].pos.x <= 935)
        return -1;
    return 0;
}

void move_zone_first_floor(sfRenderWindow *window, sfEvent event,
game_t *game_s, int change_zone)
{
    if (change_zone == 1)
        prepare_boss_floor(window, event, game_s);
    if (change_zone == -1)
        prepare_front_castle_fff(window, event, game_s);
}

void game_loop_first_floor(sfRenderWindow *window,
sfEvent event, game_t *game_s, sfSprite *first_floor_sp)
{
    int change_zone = 0;

    while (sfRenderWindow_isOpen(window)) {
        change_zone = check_pos_char_first_floor(game_s);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyQ))
                close_game(window, game_s);
            if (fight_detection(game_s) == 0) {
                manage_fight(window, game_s, game_s->view.view);
                if (change_zone != 0)
                    break;
            }
        }
        game_over(game_s, window, game_s->view.view);
        manage_game(window, game_s, first_floor_sp, game_s->view.view);
        if (change_zone != 0)
            break;
    }
    destroy_sprite(first_floor_sp);
    move_zone_first_floor(window, event, game_s, change_zone);
}

void prepare_first_floor(sfRenderWindow *window,
sfEvent event, game_t *game_s)
{
    sfTexture *first_floor = sfTexture_createFromFile
    ("asset/castle/first_floor_castle2.png", NULL);
    sfSprite *first_floor_sp = sfSprite_create();

    first_floor_music(game_s);
    sfSprite_setTexture(first_floor_sp, first_floor, sfTrue);
    game_s->collision[0].front_castle = false;
    change_fight_position(game_s);
    init_cam(window, game_s->view.view, game_s->mage[0].pos);
    set_collision_first_floor(game_s);
    game_loop_first_floor(window, event, game_s, first_floor_sp);
}

void prepare_first_floor_from_castle(sfRenderWindow *window,
sfEvent event, game_t *game_s)
{
    sfTexture *first_floor = sfTexture_createFromFile
    ("asset/castle/first_floor_castle2.png", NULL);
    sfSprite *first_floor_sp = sfSprite_create();

    first_floor_music(game_s);
    sfSprite_setTexture(first_floor_sp, first_floor, sfTrue);
    change_fight_position(game_s);
    game_s->mage[0].pos.x = 940;
    game_s->mage[0].pos.y = 250;
    game_s->collision[0].boss = false;
    set_collision_first_floor(game_s);
    init_cam(window, game_s->view.view, game_s->mage[0].pos);
    game_loop_first_floor(window, event, game_s, first_floor_sp);
}

