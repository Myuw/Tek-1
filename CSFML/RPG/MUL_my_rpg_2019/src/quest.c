/*
** EPITECH PROJECT, 2020
** quest.c
** File description:
** quest.c
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

void game_loop_quest(sfRenderWindow *window,
game_t *game_s, sfSprite *sprite, sfEvent event)
{
    sfTexture *texture = sfTexture_createFromFile
    ("asset/text_quest.png", NULL);
    sfSprite *quest = sfSprite_create();

    sfSprite_setTexture(quest, texture, sfTrue);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyQ))
                prepare_village(window, event, game_s);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_drawSprite(window, quest, NULL);
        fight_cam(window, game_s->view.view);
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(sprite);
    init_cam(window, game_s->view.view, game_s->mage[0].pos);
}

void prepare_quest_loop(sfRenderWindow *window, sfEvent event, game_t *game_s)
{
    sfTexture *texture = sfTexture_createFromFile
    ("asset/fight/forest.png", NULL);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    game_loop_quest(window, game_s, sprite, event);
}