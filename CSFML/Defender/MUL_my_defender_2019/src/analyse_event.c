/*
** EPITECH PROJECT, 2020
** analyse_event
** File description:
** defender
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "defender.h"

int check_life(character *ennemis, int nb_ennemis, int life)
{
    for (int i = 0; i != nb_ennemis; i++)
        if (ennemis[i].vector.x == 1900)
            life -= 5;
    return life;
}

int check_gold(tower *archer, int gold)
{
    for (int i = 0; i != 4; i++)
        if (archer[i].is_draw == 1 && archer[i].remove_gold == 0) {
            gold -= 100 * (i + 1);
            archer[i].remove_gold = 1;
        }
    return gold;
}

void check_end_condition(int life, sfRenderWindow *window)
{
    if (life <= 0) {
        write(1, "You loose !\n", 12);
        sfRenderWindow_close(window);
    }
    return ;
}

void analyse_event(sfRenderWindow *window, sfMouseButton left_click,\
tower archer[4], sfEvent event, int gold, sfMusic *music)
{
    static int i = 0;

    if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyQ))
        sfRenderWindow_close(window);
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyEscape))
        pause_menu(window, music);
    if (sfMouse_isButtonPressed(left_click) == 1) {
        archer[i] = click_on_button_tower(window, archer[i], gold);
        i += 1;
    }
}