/*
** EPITECH PROJECT, 2020
** game
** File description:
** game
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "my.h"
#include "defender.h"

void draw_sprite(sfRenderWindow *window, tower *archer, character *ennemis, \
int nb_ennemis)
{
    for (int i = 0; i != nb_ennemis; i++) {
        if (ennemis[i].life > 0) {
            sfRenderWindow_drawSprite(window, ennemis[i].sprite, NULL);
            sfSprite_setTextureRect(ennemis[i].sprite, ennemis[i].rect);
        }
    }
    for (int i = 0; i < 4; i++) {
        if (archer[i].is_draw == 1)
            sfRenderWindow_drawSprite(window, archer[i].sprite, NULL);
    }
}

void move_ennemis_rect(character *ennemis, int nb_ennemis)
{
    for (int i = 0; i != nb_ennemis; i++)
        ennemis[i].rect.left = move_rect(ennemis[i]);
}

void check_colision(tower *archer, character *ennemis, int nb_ennemis)
{
    for (int i = 0; i != nb_ennemis; i++) {
        if (archer[0].is_draw == 1 && ennemis[i].vector.x < 500)
            ennemis[i].life -= 5;
        if (archer[3].is_draw == 1 && ennemis[i].vector.x > 1400)
            ennemis[i].life -= 5;
        if (archer[1].is_draw == 1 && ennemis[i].vector.x > 500 \
            && ennemis[i].vector.x < 1000)
            ennemis[i].life -= 5;
        if (archer[2].is_draw == 1 && ennemis[i].vector.x > 1000 \
            && ennemis[i].vector.x < 1400)
            ennemis[i].life -= 5;
    }
}

void game_loop(sfRenderWindow *window, sfSprite *bk_sprite, character *ennemis \
, sfSprite *cut_tower_sp, int nb_ennemis)
{
    sfEvent event;
    sfMouseButton left_click = sfMouseLeft;
    tower *archer = malloc(sizeof(tower) * 4);
    int gold = 100;
    int life = 100;
    sfMusic *music = NULL;
    music = in_game_music(music);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, bk_sprite, NULL);
        draw_sprite(window, archer, ennemis, nb_ennemis);
        sfRenderWindow_drawSprite(window, cut_tower_sp, NULL);
        print_text(window, gold, life);
        sfRenderWindow_display(window);
        ennemis = manage_ennemis(ennemis, nb_ennemis);
        if (clock_ennemis() > 0.1) {
            gold += 1;
            move_ennemis_rect(ennemis, nb_ennemis);
        }
        check_colision(archer, ennemis, nb_ennemis);
        life = check_life(ennemis, nb_ennemis, life);
        gold = check_gold(archer, gold);
        check_end_condition(life, window);
        while (sfRenderWindow_pollEvent(window, &event))
            analyse_event(window, left_click, archer, event, gold, music);
    }
}

int create_background(sfRenderWindow *window)
{
    sfTexture *bk_texture = sfTexture_createFromFile\
        ("asset/game_background.png", NULL);
    sfTexture *cut_tower_tx = sfTexture_createFromFile\
        ("asset/tower_cut.png", NULL);
    sfSprite *bk_sprite = sfSprite_create();
    sfSprite *cut_tower_sp = sfSprite_create();
    sfVector2f bk_vector;
    sfVector2f cut_tower_vector;

    cut_tower_vector.x = 1721;
    cut_tower_vector.y = 555;
    bk_vector.x = 0;
    bk_vector.y = -50;
    sfSprite_setTexture(bk_sprite, bk_texture, sfTrue);
    sfSprite_setTexture(cut_tower_sp, cut_tower_tx, sfTrue);
    sfSprite_setPosition(bk_sprite, bk_vector);
    sfSprite_setPosition(cut_tower_sp, cut_tower_vector);
    create_ennemis(window, bk_sprite, cut_tower_sp);
    return 1;
}
