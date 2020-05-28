/*
** EPITECH PROJECT, 2020
** front_castle.c
** File description:
** front_castle.c
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

int check_pos_char_front_castle(game_t *game_s)
{
    if (game_s->mage[0].pos.y == 650
        && game_s->mage[0].pos.x > 925
        && game_s->mage[0].pos.x < 975)
        return 1;
    if (game_s->mage[0].pos.x >= 940
        && game_s->mage[0].pos.x <= 960
        && game_s->mage[0].pos.y >= 940
        && game_s->mage[0].pos.y <= 960)
        return -1;
    return 0;
}

void move_zone_front_castle(sfRenderWindow *window, sfEvent event,
game_t *game_s, int change_zone)
{
    if (change_zone == 1)
        prepare_first_floor(window, event, game_s);
    if (change_zone == -1)
        prepare_village_from_castle(window, event, game_s);
}

void game_loop_front_castle(sfRenderWindow *window,
sfEvent event, game_t *game_s, sfSprite *front_castle_sp)
{
    int change_zone = 0;

    while (sfRenderWindow_isOpen(window)) {
        change_zone = check_pos_char_front_castle(game_s);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyQ))
                close_game(window, game_s);
            if (fight_detection(game_s) == 0) {
                front_castle_fight(window, game_s, game_s->view.view);
                if (change_zone != 0)
                    break;
            }
        }
        game_over(game_s, window, game_s->view.view);
        manage_game(window, game_s, front_castle_sp, game_s->view.view);
        if (change_zone != 0)
            break;
    }
    destroy_sprite(front_castle_sp);
    move_zone_front_castle(window, event, game_s, change_zone);
}

void prepare_front_castle(sfRenderWindow *window,
sfEvent event, game_t *game_s)
{
    sfTexture *front_castle = sfTexture_createFromFile
    ("asset/castle/front_castle.png", NULL);
    sfSprite *front_castle_sp = sfSprite_create();

    front_castle_music(game_s);
    sfSprite_setTexture(front_castle_sp, front_castle, sfTrue);
    game_s->mage[0].pos.x = 955;
    game_s->mage[0].pos.y = 900;
    game_s->mage[4].pos.x = 800;
    game_s->mage[4].pos.y = 800;
    game_s->collision[0].village = false;
    fight_cam(window, game_s->view.view);
    set_collision_front_castle(game_s);
    game_loop_front_castle(window, event, game_s, front_castle_sp);
}

void prepare_front_castle_fff(sfRenderWindow *window,
sfEvent event, game_t *game_s)
{
    sfTexture *front_castle = sfTexture_createFromFile
    ("asset/castle/front_castle.png", NULL);
    sfSprite *front_castle_sp = sfSprite_create();

    front_castle_music(game_s);
    sfSprite_setTexture(front_castle_sp, front_castle, sfTrue);
    game_s->mage[0].pos.x = 950;
    game_s->mage[0].pos.y = 670;
    game_s->mage[4].pos.x = 800;
    game_s->mage[4].pos.y = 800;
    game_s->collision[0].first_floor = false;
    set_collision_front_castle(game_s);
    fight_cam(window, game_s->view.view);
    game_loop_front_castle(window, event, game_s, front_castle_sp);
}

    // if (game_s->mage[0].pos.y >= 1000
    //     && game_s->mage[0].pos.x > 900
    //     && game_s->mage[0].pos.x < 1000)
    //     return -1;
