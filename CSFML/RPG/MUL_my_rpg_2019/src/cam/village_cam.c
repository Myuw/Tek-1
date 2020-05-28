/*
** EPITECH PROJECT, 2020
** village_cam
** File description:
** rpg
*/

#include <SFML/Graphics.h>

void village_cam(sfRenderWindow *win, sfView *view)
{
    sfView_setCenter(view, (sfVector2f) {355, 350});
    sfView_setSize(view, (sfVector2f) {960, 540});
    sfView_zoom(view, 0.75);
    sfRenderWindow_setView(win, view);
}