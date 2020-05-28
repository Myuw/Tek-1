/*
** EPITECH PROJECT, 2020
** front_castle_fight
** File description:
** rpg
*/

#include "game_struct.h"
#include "rpg.h"
#include "fight_fct.h"

void front_castle_fight(sfRenderWindow *window, game_t *game_s, sfView *view)
{
    normal_fight_music(game_s);
    fight_cam(window, view);
    fight_window(game_s, window);
    manage_music(game_s);
}