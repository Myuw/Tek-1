/*
** EPITECH PROJECT, 2020
** print_text.c
** File description:
** print_text
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "my.h"
#include "defender.h"

void print_gold(sfRenderWindow *window, sfFont *font)
{
    sfText *gold_tx = sfText_create();
    sfVector2f vector;

    vector.x = 10;
    vector.y = 10;
    sfText_setPosition(gold_tx, vector);
    sfText_setString(gold_tx, "Gold : ");
    sfText_setFont(gold_tx, font);
    sfText_setColor(gold_tx, sfBlack);
    sfText_setCharacterSize(gold_tx, 60);
    sfRenderWindow_drawText(window, gold_tx, NULL);
}

void print_nb_gold(sfRenderWindow *window, sfFont *font, int gold)
{
    sfText *gold_tx = sfText_create();
    sfVector2f vector;
    char *nb_gold = malloc(sizeof(char) * 5);

    vector.x = 200;
    vector.y = 10;
    nb_gold = my_itoa(gold);
    sfText_setPosition(gold_tx, vector);
    sfText_setString(gold_tx, nb_gold);
    sfText_setFont(gold_tx, font);
    sfText_setColor(gold_tx, sfBlack);
    sfText_setCharacterSize(gold_tx, 60);
    sfRenderWindow_drawText(window, gold_tx, NULL);
}

void print_life(sfRenderWindow *window, sfFont *font)
{
    sfText *life_tx = sfText_create();
    sfVector2f vector;

    vector.x = 1650;
    vector.y = 10;
    sfText_setPosition(life_tx, vector);
    sfText_setString(life_tx, "Life : ");
    sfText_setFont(life_tx, font);
    sfText_setColor(life_tx, sfBlack);
    sfText_setCharacterSize(life_tx, 60);
    sfRenderWindow_drawText(window, life_tx, NULL);
}

void print_nb_life(sfRenderWindow *window, sfFont *font, int life)
{
    sfText *life_tx = sfText_create();
    sfVector2f vector;
    char *nb_life = malloc(sizeof(char) * 3);

    vector.x = 1800;
    vector.y = 10;
    nb_life = my_itoa(life);
    sfText_setPosition(life_tx, vector);
    sfText_setString(life_tx, nb_life);
    sfText_setFont(life_tx, font);
    sfText_setColor(life_tx, sfBlack);
    sfText_setCharacterSize(life_tx, 60);
    sfRenderWindow_drawText(window, life_tx, NULL);
}

void print_text(sfRenderWindow *window, int gold, int life)
{
    sfFont *font = sfFont_createFromFile("asset/arial.ttf");

    print_gold(window, font);
    print_life(window, font);
    print_nb_gold(window, font, gold);
    print_nb_life(window, font, life);
}