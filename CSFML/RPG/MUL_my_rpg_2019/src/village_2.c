/*
** EPITECH PROJECT, 2020
** village_2.c
** File description:
** village_2
*/

#include <stdlib.h>
#include "game_struct.h"
#include "lib.h"
#include "rpg.h"
#include "fight.h"
#include "fight_fct.h"
#include "inv_fct.h"

void destroy_village(sfSprite *village_sp, sfSprite *png_quest_sp)
{
    destroy_sprite(village_sp);
    destroy_sprite(png_quest_sp);
}

void prepare_village_from_castle(sfRenderWindow *window, \
sfEvent event, game_t *game_s)
{
    sfTexture *village = sfTexture_createFromFile("asset/village.png", NULL);
    sfSprite *village_sp = sfSprite_create();
    sfTexture *png_quest = sfTexture_createFromFile
    ("asset/png_quest.png", NULL);
    sfSprite *png_quest_sp = sfSprite_create();

    sfSprite_setTexture(village_sp, village, sfTrue);
    sfSprite_setPosition(png_quest_sp, (sfVector2f) {1420, 540});
    sfSprite_setTexture(png_quest_sp, png_quest, sfTrue);
    sfMusic_destroy(game_s->music.music);
    village_music(game_s);
    game_s->mage[0].pos.x = 50;
    game_s->mage[0].pos.y = 350;
    game_s->mage[4].pos.x = 700;
    game_s->mage[4].pos.y = 700;
    game_s->collision[0].front_castle = false;
    village_cam(window, game_s->view.view);
    set_collision_village(game_s);
    game_loop_village(window, event, game_s, village_sp, png_quest_sp);
}

void prepare_village(sfRenderWindow *window, sfEvent event, game_t *game_s)
{
    sfTexture *village = sfTexture_createFromFile("asset/village.png", NULL);
    sfSprite *village_sp = sfSprite_create();
    sfTexture *png_quest = sfTexture_createFromFile
    ("asset/png_quest.png", NULL);
    sfSprite *png_quest_sp = sfSprite_create();
    sfVector2f png_quest_pos;

    png_quest_pos.x = 1420;
    png_quest_pos.y = 540;
    sfSprite_setTexture(village_sp, village, sfTrue);
    sfSprite_setPosition(png_quest_sp, png_quest_pos);
    sfSprite_setTexture(png_quest_sp, png_quest, sfTrue);
    game_s->mage[0].pos.x = 810;
    game_s->mage[0].pos.y = 900;
    game_s->mage[4].pos.x = 700;
    game_s->mage[4].pos.y = 700;
    game_s->collision[0].start = false;
    init_cam(window, game_s->view.view, game_s->mage[0].pos);
    set_collision_village(game_s);
    game_loop_village(window, event, game_s, village_sp, png_quest_sp);
}
