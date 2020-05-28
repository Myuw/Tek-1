/*
** EPITECH PROJECT, 2020
** click on main menu
** File description:
** click on main menu
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "main_menu.h"

void click_on_play(sfRenderWindow *window)
{
    sfTexture *play = sfTexture_createFromFile
    ("asset/main_menu/main_menu_click_play.png", NULL);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, play, sfTrue);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void click_on_quit(sfRenderWindow *window)
{
    sfTexture *quit = sfTexture_createFromFile
    ("asset/main_menu/main_menu_click_quit.png", NULL);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, quit, sfTrue);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void click_on_option(sfRenderWindow *window,
sfMouseButton left_click, sfMusic *music)
{
    sfTexture *option = sfTexture_createFromFile
    ("asset/main_menu/main_menu_click_option.png", NULL);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, option, sfTrue);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
    main_menu_option(window, left_click, music);
}
