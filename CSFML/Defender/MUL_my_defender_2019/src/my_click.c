/*
** EPITECH PROJECT, 2020
** my_click
** File description:
** defender
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

void click_on_quit(sfRenderWindow *window)
{
    sfTexture *texture = sfTexture_createFromFile\
        ("asset/main_menu_quit_click.png", NULL);
    sfVector2f vector;
    sfSprite *sprite = sfSprite_create();

    vector.x = 640;
    vector.y = 150;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void click_on_music(sfRenderWindow *window)
{
    sfTexture *texture = sfTexture_createFromFile\
        ("asset/main_menu_music_click.png", NULL);
    sfVector2f vector;
    sfSprite *sprite = sfSprite_create();

    vector.x = 640;
    vector.y = 150;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void click_on_play(sfRenderWindow *window)
{
    sfTexture *texture = sfTexture_createFromFile\
        ("asset/main_menu_play_click.png", NULL);
    sfVector2f vector;
    sfSprite *sprite = sfSprite_create();

    vector.x = 640;
    vector.y = 150;
    sfRenderWindow_clear(window, sfBlack);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
    create_background(window);
}
