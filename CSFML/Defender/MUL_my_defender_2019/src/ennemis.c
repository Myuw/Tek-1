/*
** EPITECH PROJECT, 2020
** ennemis.c
** File description:
** ennemis.c
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "my.h"
#include "defender.h"

float clock_ennemis(void)
{
    sfClock *clock;
    sfTime time;
    float seconds;

    clock = sfClock_create();
    while (1) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.1) {
            sfClock_restart(clock);
            return (seconds);
        }
    }
}

int move_rect(character ennemis)
{
    if (ennemis.rect.left >= 1300)
        ennemis.rect.left = 0;
    else ennemis.rect.left += 187;

    return ennemis.rect.left;
}

character move_ennemis(character ennemis)
{
    static int i = 0;

    sfSprite_setPosition(ennemis.sprite, ennemis.vector);
        ennemis.vector.x += 10;
    if (ennemis.vector.x >= 1920) {
        ennemis.vector.x = -100;
        ennemis.life = 300 + (100 * i);
        i += 1;
    }
    return ennemis;
}

character *manage_ennemis(character *ennemis, int nb_ennemis)
{
    for (int i = 0; i != nb_ennemis; i++)
        ennemis[i] = move_ennemis(ennemis[i]);
    return ennemis;
}

void create_ennemis(sfRenderWindow *window, sfSprite *bk_sprite, \
                    sfSprite *cut_tower_sp)
{
    int nb_ennemis = 5;
    int placement = -100;

    character ennemis[nb_ennemis];
    sfIntRect rect_buffer = {0, 0, 187, 126};
    for (int j = 0; j != nb_ennemis; j++) {
        ennemis[j].life = 300;
        ennemis[j].rect = rect_buffer;
        ennemis[j].vector.x = placement;
        placement -= 100;
        ennemis[j].vector.y = 600;
        ennemis[j].texture = sfTexture_createFromFile("asset/char.png", NULL);
        ennemis[j].sprite = sfSprite_create();
        sfSprite_setTexture(ennemis[j].sprite, ennemis[j].texture, sfTrue);
        sfSprite_setPosition(ennemis[j].sprite, ennemis[j].vector);
    }
    game_loop(window, bk_sprite, ennemis, cut_tower_sp, nb_ennemis);
}
