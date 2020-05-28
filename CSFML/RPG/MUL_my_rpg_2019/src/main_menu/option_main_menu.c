/*
** EPITECH PROJECT, 2020
** option main menu
** File description:
** option menu of main menu
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "main_menu.h"

void check_music(sfMusic *music, int sound)
{
    static int buffer = 0;
    if (sound == -1 && buffer == 0)
        sfMusic_stop(music);
    if (sound == 0 && buffer == -1)
        sfMusic_play(music);
    buffer = sound;
}

int click_on_music(sfRenderWindow *window, int sound)
{
    sfVector2i mouse;

    mouse = sfMouse_getPositionRenderWindow(window);
    if (mouse.y > 470 && mouse.x > 900
        && mouse.y < 600 && mouse.x < 1020
        && sound == 0) {
        return -1;
    }
    if (mouse.y > 470 && mouse.x > 900
        && mouse.y < 600 && mouse.x < 1020
        && sound == -1) {
        return 0;
    }
    return 0;
}

void draw_sprite_option(sfRenderWindow *window, int sound)
{
    sfTexture *music_on = sfTexture_createFromFile
    ("asset/main_menu/main_menu_music_on.png", NULL);
    sfTexture *music_off = sfTexture_createFromFile
    ("asset/main_menu/main_menu_music_off.png", NULL);
    sfSprite *sprite_on = sfSprite_create();
    sfSprite *sprite_off = sfSprite_create();

    sfSprite_setTexture(sprite_on, music_on, sfTrue);
    sfSprite_setTexture(sprite_off, music_off, sfTrue);
    if (sound == 0)
        sfRenderWindow_drawSprite(window, sprite_on, NULL);
    if (sound == -1)
        sfRenderWindow_drawSprite(window, sprite_off, NULL);
}

void main_menu_option(sfRenderWindow *window,
sfMouseButton left_click, sfMusic *music)
{
    static int sound = 0;

    while (1) {
        sfRenderWindow_clear(window, sfBlack);
        draw_sprite_option(window, sound);
        sfRenderWindow_display(window);
        if (sfMouse_isButtonPressed(left_click) == 1) {
            sound = click_on_music(window, sound);
        }
        check_music(music, sound);
        if (sfKeyboard_isKeyPressed(sfKeyQ))
            break;
    }
}
