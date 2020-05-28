/*
** EPITECH PROJECT, 2020
** game_loop_start
** File description:
** game_loop_start
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

void game_loop_start_2(sfRenderWindow *window, sfEvent event,
game_t *game_s, sfSprite *start_sp)
{
    int change_zone = 0;
    sfRenderWindow_clear(window, sfBlack);
    while (sfRenderWindow_isOpen(window)) {
        change_zone = check_pos_char_start(game_s);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyQ))
                close_game(window, game_s);
            if (sfKeyboard_isKeyPressed(sfKeyP)) {
                manage_fight(window, game_s, game_s->view.view);
            if (change_zone != 0)
                break;
            }
        }
        manage_game(window, game_s, start_sp, game_s->view.view);
        if (change_zone != 0)
            break;
    }
    destroy_sprite(start_sp);
    if (change_zone == 1)
        prepare_village(window, event, game_s);
}

void prepare_start(sfRenderWindow *window, sfEvent event, game_t *game_s)
{
    sfTexture *start = sfTexture_createFromFile("asset/start_game.png", NULL);
    sfSprite *start_sp = sfSprite_create();

    game_s->collision[0].village = false;
    game_s->collision[0].front_castle = false;
    game_s->collision[0].first_floor = false;
    game_s->collision[0].boss = false;
    sfSprite_setTexture(start_sp, start, sfTrue);
    game_s->mage[0].pos.x = 500;
    game_s->mage[0].pos.y = 300;
    init_cam(window, game_s->view.view, game_s->mage[0].pos);
    set_collision_start(game_s);
    draw_start_collision(game_s, window);
    game_loop_start_2(window, event, game_s, start_sp);

}
