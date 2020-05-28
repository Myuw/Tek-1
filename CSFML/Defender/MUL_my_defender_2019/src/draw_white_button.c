/*
** EPITECH PROJECT, 2020
** draw_white_button
** File description:
** draw_white_button
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "my.h"
#include "defender.h"

void draw_archer_white_button(sfRenderWindow *window)
{
    sfTexture *texture = sfTexture_createFromFile\
        ("asset/button_tower_archer_white.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f vector;
    vector.x = -18;
    vector.y = 873;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void draw_magic_white_button(sfRenderWindow *window)
{
    sfTexture *texture = sfTexture_createFromFile\
        ("asset/button_tower_magic_white.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f vector;
    vector.x = 117;
    vector.y = 873;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void draw_archerplus_white_button(sfRenderWindow *window)
{
    sfTexture *texture = sfTexture_createFromFile\
        ("asset/button_tower_archerplus_white.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f vector;
    vector.x = 250;
    vector.y = 873;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void draw_magicplus_white_button(sfRenderWindow *window)
{
    sfTexture *texture = sfTexture_createFromFile\
        ("asset/button_tower_magicplus_white.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f vector;
    vector.x = 377;
    vector.y = 873;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

