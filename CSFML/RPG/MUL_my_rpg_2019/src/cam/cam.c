/*
** EPITECH PROJECT, 2020
** cam
** File description:
** rpg
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "main_menu.h"
#include "game_struct.h"

void init_cam(sfRenderWindow *win, sfView *view, sfVector2f pos)
{
    sfView_setCenter(view, pos);
    sfView_setSize(view, (sfVector2f) {960, 540});
    sfView_zoom(view, 0.75);
    sfRenderWindow_setView(win, view);
}

void cam_up_down(sfRenderWindow *win, sfView *view,
sfVector2f up, sfVector2f down)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue) {
        sfView_move(view, up);
        sfRenderWindow_setView(win, view);
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue) {
        sfView_move(view, down);
        sfRenderWindow_setView(win, view);
    }
}

void cam_left_right(sfRenderWindow *win, sfView *view,
sfVector2f left, sfVector2f right)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue) {
        sfView_move(view, right);
        sfRenderWindow_setView(win, view);
    }
    if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue) {
        sfView_move(view, left);
        sfRenderWindow_setView(win, view);
    }
}

void cam_movement(sfRenderWindow *win, sfView *view, game_t *game)
{
    if (game->collision[0].front_castle == true)
        return ;
    sfView_setCenter(view, game->mage[0].pos);
    sfRenderWindow_setView(win, view);
}