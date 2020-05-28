/*
** EPITECH PROJECT, 2020
** fight_cam
** File description:
** rpg
*/

#include <SFML/Graphics.h>

void menu_cam(sfRenderWindow *win, sfView *view)
{
    sfView_setCenter(view, (sfVector2f) {960, 540});
    sfView_setSize(view, (sfVector2f) {1920, 1080});
    sfView_zoom(view, (float)0.75);
    sfRenderWindow_setView(win, view);
}

void fight_cam(sfRenderWindow *win, sfView *view)
{
    sfVector2f pos;
    float zoom = 2;

    pos.x = 960;
    pos.y = 540;
    sfView_setCenter(view, pos);
    sfView_setSize(view, pos);
    sfView_zoom(view, zoom);
    sfRenderWindow_setView(win, view);
}