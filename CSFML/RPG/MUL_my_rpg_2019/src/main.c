/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
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

void manage_game(sfRenderWindow *window, game_t *game_s,
sfSprite *sprite, sfView *view)
{
    sfRenderWindow_clear(window, sfBlack);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        pause_menu(window, game_s->music.music, game_s->mage[0].pos, view);
    move_sprites(game_s);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    handle_scale(game_s);
    handle_sprite(game_s, window);
    display_inv(window, game_s);
    draw_shape(game_s, window);
    cam_movement(window, view, game_s);
    sfRenderWindow_display(window);
}

void manage_fight(sfRenderWindow *window, game_t *game_s, sfView *view)
{
    normal_fight_music(game_s);
    fight_cam(window, view);
    fight_window(game_s, window);
    manage_music(game_s);
    init_cam(window, view, game_s->mage[0].pos);
}

int check_pos_char_start(game_t *game_s)
{
    if (game_s->mage[0].pos.y <= 0)
        return 1;
    return 0;
}

void game_loop_start(sfRenderWindow *window, sfEvent event,
game_t *game_s, sfSprite *start_sp)
{
    int change_zone = 0;
    while (sfRenderWindow_isOpen(window)) {
        change_zone = check_pos_char_start(game_s);
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
        manage_game(window, game_s, start_sp, game_s->view.view);
        if (change_zone != 0)
            break;
    }
    destroy_sprite(start_sp);
    move_zone_main(window, event, game_s, change_zone);
    sfRenderWindow_destroy(window);
}

void initialise_game(sfRenderWindow *window)
{
    game_t *game_s = malloc(sizeof(game_t));
    sfEvent event;
    sfTexture *start = sfTexture_createFromFile("asset/start_game.png", NULL);
    sfSprite *start_sp = sfSprite_create();

    if (game_s == NULL)
        return ;
    village_music(game_s);
    sfSprite_setTexture(start_sp, start, sfTrue);
    create_inv(game_s);
    set_fight(game_s);
    set_collision_start(game_s);
    draw_start_collision(game_s, window);
    set_collision_false(game_s);
    help_window(window);
    set_sprite(game_s);
    init_cam(window, game_s->view.view, game_s->mage[0].pos);
    game_loop_start(window, event, game_s, start_sp);
}
