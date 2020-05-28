/*
** EPITECH PROJECT, 2020
** handle life
** File description:
** handle life + mana
*/
#include "game_struct.h"
#include "fight_fct.h"

int handle_mana(game_t *game_s, int mvt)
{
    if (mvt == 0) {
        game_s->mage[3].rect.top += 30;
        game_s->enemy[1].rect.top += 40;
    }
    return (game_s->mage[3].rect.top);
}

void change_fight_position(game_t *game_s)
{
    game_s->enemy[2].pos.x = -1000;
    game_s->enemy[2].pos.y = -1000;
    game_s->mage[0].pos.x = 900;
    game_s->mage[0].pos.y = 900;
    game_s->mage[4].pos.x = 1500;
    game_s->mage[4].pos.y = 320;
    game_s->enemy[0].pos.x = 1200;
    game_s->enemy[0].pos.y = 380;
    game_s->mage[5].pos.y = 500;
    game_s->enemy[2].pos.y = 380;
    game_s->fight[0].text = sfTexture_createFromFile
    ("asset/castle/castle_fight.png", NULL);
    game_s->fight[0].sprite = sfSprite_create();
}
