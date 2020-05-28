/*
** EPITECH PROJECT, 2020
** help
** File description:
** help window
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>

void help_window(sfRenderWindow *window)
{
    sfSprite *sprite;
    sfTexture *texture;

    texture = sfTexture_createFromFile("asset/help.png", NULL);
    sprite = sfSprite_create();
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        sfSprite_setTexture(sprite, texture, sfTrue);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            break;
    }
}
