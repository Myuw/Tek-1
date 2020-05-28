/*
** EPITECH PROJECT, 2020
** village.c
** File description:
** village.c
*/

#include <stdlib.h>
#include "game_struct.h"
#include "lib.h"
#include "rpg.h"
#include "fight.h"
#include "fight_fct.h"
#include "inv_fct.h"

int check_pos_char_village(game_t *game_s)
{
    if (game_s->mage[0].pos.x <= 0
        && game_s->mage[0].pos.y > 300
        && game_s->mage[0].pos.y < 400)
        return 1;
    if (game_s->mage[0].pos.y >= 1000)
        return -1;
    return 0;
}

void move_zone_village(sfRenderWindow *window, sfEvent event,
game_t *game_s, int change_zone)
{
    if (change_zone == 1)
        prepare_front_castle(window, event, game_s);
    if (change_zone == -1)
        prepare_start(window, event, game_s);
}

void check_pos_quest(sfRenderWindow *window, game_t *game_s, sfEvent event)
{
    sfTexture *quest = sfTexture_createFromFile
    ("asset/text_png_quest.png", NULL);
    sfSprite *quest_sp = sfSprite_create();
    sfVector2f vector;

    vector.x = 1190;
    vector.y = 500;
    sfSprite_setPosition(quest_sp, vector);
    sfSprite_setTexture(quest_sp, quest, sfTrue);
    if (game_s->mage[0].pos.x >= 1100 && game_s->mage[0].pos.y
    >= 300 && game_s->mage[0].pos.y <= 800) {
        sfRenderWindow_drawSprite(window, quest_sp, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyT))
            prepare_quest_loop(window, event , game_s);
    }
}

void manage_game_village(sfRenderWindow *window, game_t *game_s,
sfSprite *sprite, sfView *view, sfSprite *sp, sfEvent event)
{
    sfRenderWindow_clear(window, sfBlack);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        pause_menu(window, game_s->music.music, game_s->mage[0].pos, view);
    move_sprites(game_s);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    handle_sprite(game_s, window);
    check_pos_quest(window, game_s, event);
    sfRenderWindow_drawSprite(window, sp, NULL);
    display_inv(window, game_s);
    draw_shape(game_s, window);
    cam_movement(window, view, game_s);
    sfRenderWindow_display(window);
}

void game_loop_village(sfRenderWindow *window, sfEvent event,
game_t *game_s, sfSprite *village_sp, sfSprite *png_quest_sp)
{
    int change_zone = 0;
    while (sfRenderWindow_isOpen(window)) {
        change_zone = check_pos_char_village(game_s);
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
        manage_game_village(window, game_s, village_sp,
        game_s->view.view, png_quest_sp, event);
        if (change_zone != 0)
            break;
    }
    destroy_village(village_sp, png_quest_sp);
    move_zone_village(window, event, game_s, change_zone);
}
