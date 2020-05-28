/*
** EPITECH PROJECT, 2020
** pause
** File description:
** rpg
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "rpg.h"

void restart_game(sfRenderWindow *window, sfMusic *music)
{
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
    initialise_game(window);
    return ;
}

int menu_event(sfRenderWindow *window, sfMusic *music)
{
    sfVector2i mouse_pos;

    mouse_pos = sfMouse_getPositionRenderWindow(window);
    if (mouse_pos.y > 180 && mouse_pos.x > 800 && mouse_pos.y < 320
        && mouse_pos.x < 1100)
        return (-1);
    if (mouse_pos.y > 730 && mouse_pos.x > 800 && mouse_pos.y < 900
        && mouse_pos.x < 1100) {
        sfMusic_destroy(music);
        sfRenderWindow_close(window);
        return (-1);
    }
    return (0);
}

sfSprite *create_pause_menu(sfRenderWindow *window, sfSprite *sprite)
{
    sfTexture *texture = sfTexture_createFromFile
    ("asset/pause/pause_menu.png", NULL);

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, (sfVector2f) {40, 50});
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
    return (sprite);
}

void pause_menu(sfRenderWindow *window, sfMusic *music,
sfVector2f pos, sfView *view)
{
    int quit = 0;
    sfSprite *sprite = sfSprite_create();

    menu_cam(window, view);
    sprite = create_pause_menu(window, sprite);
    while (1) {
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyA) || quit == -1)
            break;
        if (sfMouse_isButtonPressed(sfMouseLeft) == 1)
            quit = menu_event(window, music);
    }
    sfSprite_destroy(sprite);
    init_cam(window, view, pos);
}