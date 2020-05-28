/*
** EPITECH PROJECT, 2020
** tower.c
** File description:
** tower.c
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "my.h"
#include "defender.h"

tower draw_archer_tower(sfRenderWindow *window, tower archer)
{
    static int i = 0;

    if (i == 0) {
        i += 1;
        draw_archer_white_button(window);
        archer.vector.x = 170;
        archer.vector.y = 175;
        archer.texture = sfTexture_createFromFile("asset/tower_archer.png", \
NULL);
        archer.sprite = sfSprite_create();
        sfSprite_setTexture(archer.sprite, archer.texture, sfTrue);
        sfSprite_setPosition(archer.sprite, archer.vector);
        archer.is_draw = 1;
        archer.remove_gold = 0;
    }
    return archer;
}

tower draw_magic_tower(sfRenderWindow *window, tower archer)
{
    static int i = 0;

    if (i == 0) {
        i += 1;
        draw_magic_white_button(window);
        archer.vector.x = 500;
        archer.vector.y = 550;
        archer.texture = sfTexture_createFromFile("asset/tower_magic.png", \
NULL);
        archer.sprite = sfSprite_create();
        sfSprite_setTexture(archer.sprite, archer.texture, sfTrue);
        sfSprite_setPosition(archer.sprite, archer.vector);
        archer.is_draw = 1;
        archer.remove_gold = 0;
    }
    return archer;
}

tower draw_archerplus_tower(sfRenderWindow *window, tower archer)
{
    static int i = 0;

    if (i == 0) {
        i += 1;
        draw_archerplus_white_button(window);
        archer.vector.x = 1450;
        archer.vector.y = 575;
        archer.texture = sfTexture_createFromFile       \
            ("asset/tower_archerplus.png", NULL);
        archer.sprite = sfSprite_create();
        sfSprite_setTexture(archer.sprite, archer.texture, sfTrue);
        sfSprite_setPosition(archer.sprite, archer.vector);
        archer.remove_gold = 1;
        archer.is_draw = 0;
    }
    return archer;
}

tower draw_magicplus_tower(sfRenderWindow *window, tower archer)
{
    static int i = 0;

    if (i == 0) {
        i += 1;
        draw_magicplus_white_button(window);
        archer.vector.x = 1025;
        archer.vector.y = 375;
        archer.texture = sfTexture_createFromFile("asset/tower_magicplus.png", \
NULL);
        archer.sprite = sfSprite_create();
        sfSprite_setTexture(archer.sprite, archer.texture, sfTrue);
        sfSprite_setPosition(archer.sprite, archer.vector);
        archer.is_draw = 1;
        archer.remove_gold = 0;
    }
    return archer;
}

tower click_on_button_tower(sfRenderWindow *window, tower archer, int gold)
{
    sfVector2i mouse_pos;

    mouse_pos = sfMouse_getPositionRenderWindow(window);
    if (mouse_pos.x > 60 && mouse_pos.y > 910 && mouse_pos.x < 140      \
        && mouse_pos.y < 980 && gold >= 100)
        archer = draw_archer_tower(window, archer);
    if (mouse_pos.x > 190 && mouse_pos.y > 910 && mouse_pos.x < 270     \
        && mouse_pos.y < 980 && gold >= 200)
        archer = draw_magic_tower(window, archer);
    if (mouse_pos.x > 320 && mouse_pos.y > 910 && mouse_pos.x < 400     \
        && mouse_pos.y < 980 && gold >= 300)
        archer = draw_archerplus_tower(window, archer);
    if (mouse_pos.x > 450 && mouse_pos.y > 910 && mouse_pos.x < 530     \
        && mouse_pos.y < 980 && gold >= 400)
        archer = draw_magicplus_tower(window, archer);
    return archer;
}
