/*
** EPITECH PROJECT, 2020
** boss_floor.c
** File description:
** boss floor
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

int check_pos_char_boss_floor(game_t *game_s)
{
    if (game_s->mage[0].pos.y >= 1000
        && game_s->mage[0].pos.x >= 850
        && game_s->mage[0].pos.x <= 950)
        return -1;
    return 0;
}

void manage_boss(sfRenderWindow *window, game_t *game_s, sfView *view)
{
    boss_music(game_s);
    fight_cam(window, view);
    final_boss(game_s, window);
    boss_floor_music(game_s);
    init_cam(window, view, game_s->mage[0].pos);
}

void win_or_lose(sfRenderWindow *window, game_t *game_s)
{
    win_condition(game_s, window, game_s->view.view);
    game_over(game_s, window, game_s->view.view);
}

void game_loop_boss_floor(sfRenderWindow *window, sfEvent event,
game_t *game_s, sfSprite *boss_floor_sp)
{
    int change_zone = 0;
    while (sfRenderWindow_isOpen(window)) {
        change_zone = check_pos_char_boss_floor(game_s);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyQ))
                close_game(window, game_s);
            if (fight_detection(game_s) == 0) {
                manage_boss(window, game_s, game_s->view.view);
                if (change_zone != 0)
                    break;
            }
        }
        win_or_lose(window, game_s);
        manage_game(window, game_s, boss_floor_sp, game_s->view.view);
        if (change_zone != 0)
            break;
    }
    destroy_sprite(boss_floor_sp);
    if (change_zone == -1)
        prepare_first_floor_from_castle(window, event, game_s);
}

void prepare_boss_floor(sfRenderWindow *window, sfEvent event, game_t *game_s)
{
    sfTexture *boss_floor = sfTexture_createFromFile
    ("asset/castle/boss_floor2.png", NULL);
    sfSprite *boss_floor_sp = sfSprite_create();

    boss_floor_music(game_s);
    sfSprite_setTexture(boss_floor_sp, boss_floor, sfTrue);
    game_s->mage[0].pos.x = 925;
    game_s->mage[0].pos.y = 900;
    game_s->mage[4].pos.x = -1000;
    game_s->mage[4].pos.y = -1000;
    game_s->enemy[2].pos.x = 900;
    game_s->enemy[2].pos.y = 300;
    game_s->collision[0].first_floor = false;
    set_collision_boss(game_s);
    init_cam(window, game_s->view.view, game_s->mage[0].pos);
    game_loop_boss_floor(window, event, game_s, boss_floor_sp);
}
