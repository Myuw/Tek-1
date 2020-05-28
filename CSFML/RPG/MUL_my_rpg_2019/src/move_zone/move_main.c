/*
** EPITECH PROJECT, 2020
** move_zone
** File description:
** rpg
*/

#include "game_struct.h"
#include "rpg.h"

void move_zone_main(sfRenderWindow *window, sfEvent event,
game_t *game_s, int change_zone)
{
    if (change_zone == 1)
        prepare_village(window, event, game_s);
}

