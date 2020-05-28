/*
** EPITECH PROJECT, 2020
** pause_menu
** File description:
** defender
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "my.h"
#include "defender.h"

void restart_game(UNUSED sfRenderWindow *window,UNUSED sfMusic *music)
{
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
    initialise_game();
    return ;
}

int menu_event(sfRenderWindow *window, sfMusic *music, sfSprite *sprite)
{
    sfVector2i mouse_pos;

    mouse_pos = sfMouse_getPositionRenderWindow(window);
    if (mouse_pos.y > 260 && mouse_pos.x > 800 && mouse_pos.y < 400 \
    && mouse_pos.x < 1100)
        return (-1);
    if (mouse_pos.y > 460 && mouse_pos.x > 800 && mouse_pos.y < 580 \
        && mouse_pos.x < 1100)
        restart_game(window, music);
    if (mouse_pos.y > 670 && mouse_pos.x > 800 && mouse_pos.y < 790 \
        && mouse_pos.x < 1100) {
        sfMusic_destroy(music);
        sfSprite_destroy(sprite);
        sfRenderWindow_close(window);
        return (-1);
    }
    return (0);
}

sfSprite *create_pause_menu(sfRenderWindow *window, sfSprite *sprite)
{
    sfTexture *texture = sfTexture_createFromFile("asset/pause_menu.png", NULL);
    sfVector2f vector;

    vector.x = 0;
    vector.y = -25;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
    return (sprite);
}

void pause_menu(sfRenderWindow *window, sfMusic *music)
{
    int out = 0;
    sfTexture *texture = sfTexture_createFromFile("asset/pause_menu.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f vector = {0, -25};

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
    while (1) {
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA) || out == -1)
            break;
        if (sfMouse_isButtonPressed(sfMouseLeft) == 1)
            out = menu_event(window, music, sprite);
    }
    sfSprite_destroy(sprite);
}
