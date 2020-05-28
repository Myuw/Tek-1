/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "defender.h"

int click_on_menu(sfRenderWindow *window, sfMusic *music)
{
    sfVector2i mouse_pos;

    mouse_pos = sfMouse_getPositionRenderWindow(window);
    if (mouse_pos.y > 260 && mouse_pos.x > 800 && mouse_pos.y < 400 \
        && mouse_pos.x < 1100) {
        sfMusic_destroy(music);
        click_on_play(window);
        return 1;
    }
    if (mouse_pos.y > 460 && mouse_pos.x > 800 && mouse_pos.y < 580 \
        && mouse_pos.x < 1100)
        click_on_music(window);
    if (mouse_pos.y > 670 && mouse_pos.x > 800 && mouse_pos.y < 790 \
        && mouse_pos.x < 1100) {
        click_on_quit(window);
        return -1;
    }
    return 0;
}

void main_menu_loop(sfRenderWindow *window, sfSprite *sprite, \
                    sfMouseButton left_click, sfSprite *sprite_bg)
{
    sfMusic *music = NULL;
    sfEvent event;
    int game_finish = 0;

    music = main_menu_music(music);
    while (sfRenderWindow_isOpen(window)) {
            sfRenderWindow_drawSprite(window, sprite_bg, NULL);
            sfRenderWindow_drawSprite(window, sprite, NULL);
            sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            if (sfMouse_isButtonPressed(left_click) == 1)
                game_finish = click_on_menu(window, music);
            if (game_finish == -1)
                break;
        }
        if (game_finish == -1)
            break;
    }
}

void create_main_menu(sfRenderWindow *window, sfMouseButton left_click)
{
    sfTexture *texture_bg = sfTexture_createFromFile\
        ("asset/background_nointerface.png", NULL);
    sfTexture *texture = sfTexture_createFromFile\
        ("asset/main_menu.png", NULL);
    sfVector2f vector;
    sfSprite *sprite = sfSprite_create();
    sfSprite *sprite_bg = sfSprite_create();
    vector.x = 640;
    vector.y = 150;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTexture(sprite_bg, texture_bg, sfTrue);
    sfSprite_setPosition(sprite, vector);
    main_menu_loop(window, sprite, left_click, sprite_bg);
}
