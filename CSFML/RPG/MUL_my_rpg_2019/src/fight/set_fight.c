/*
** EPITECH PROJECT, 2020
** set fight
** File description:
** set fight
*/

#include "game_struct.h"
#include "fight_fct.h"
#include "inv_fct.h"
#include <stdio.h>

int fight_detection(game_t *game_s)
{
    if (game_s->mage[0].pos.x >= game_s->mage[4].pos.x - 50 &&
                game_s->mage[0].pos.x <= game_s->mage[4].pos.x + 50 &&
                game_s->mage[0].pos.y >= game_s->mage[4].pos.y - 50 &&
        game_s->mage[0].pos.y <= game_s->mage[4].pos.y + 50)
        return (0);
    if (game_s->mage[0].pos.x >= game_s->enemy[2].pos.x - 50 &&
                        game_s->mage[0].pos.x <= game_s->enemy[2].pos.x + 50 &&
                        game_s->mage[0].pos.y >= game_s->enemy[2].pos.y - 50 &&
        game_s->mage[0].pos.y <= game_s->enemy[2].pos.y + 50)
        return (0);
    return (1);
}

void set_position(game_t *game_s)
{
    for (int i = 1; i < 5; i++)
        game_s->fight[i].pos.x = 10;
    game_s->fight[1].pos.y = 10;
    game_s->fight[2].pos.y = 110;
    game_s->fight[3].pos.y = 210;
    game_s->fight[4].pos.y = 310;
    game_s->mage[5].pos.x = 300;
    game_s->mage[5].pos.y = 300;
    game_s->enemy[0].pos.x = 1000;
    game_s->enemy[0].pos.y = 150;
    game_s->enemy[1].pos.x = 1200;
    game_s->enemy[1].pos.y = 200;
    game_s->enemy[2].pos.x = -1000;
    game_s->enemy[2].pos.y = -1000;
    game_s->enemy[3].pos.x = 1000;
    game_s->enemy[3].pos.y = 120;
}

void set_fight3(game_t *game_s)
{
    sfIntRect pv_rect = {0, 0, 225, 40};
    sfIntRect boss_rect = {0, 0, 520, 798};

    game_s->enemy[1].text =
        sfTexture_createFromFile("asset/character/dragon_pv.png", NULL);
    game_s->enemy[1].rect = pv_rect;
    game_s->enemy[1].sprite = sfSprite_create();
    game_s->enemy[2].text =
        sfTexture_createFromFile("asset/fight/boss.png", NULL);
    game_s->enemy[2].sprite =
        sfSprite_create();
    game_s->enemy[3].text =
        sfTexture_createFromFile("asset/fight/boss_fight.png", NULL);
    game_s->enemy[3].sprite = sfSprite_create();
    game_s->enemy[3].rect = boss_rect;
}

void set_fight2(game_t *game_s)
{
    game_s->fight[3].text =
        sfTexture_createFromFile("asset/fight/item.png", NULL);
    game_s->fight[3].sprite = sfSprite_create();
    game_s->fight[4].text =
        sfTexture_createFromFile("asset/fight/run.png", NULL);
    game_s->fight[4].sprite = sfSprite_create();
    game_s->fight[1].text =
        sfTexture_createFromFile("asset/fight/atk.png", NULL);
    game_s->fight[1].sprite = sfSprite_create();
    game_s->fight[2].text =
        sfTexture_createFromFile("asset/fight/def.png", NULL);
    game_s->fight[2].sprite = sfSprite_create();
    set_fight3(game_s);
}

void set_fight(game_t *game_s)
{
    sfIntRect mage_rect = {2250, 0, 450, 400};
    sfIntRect dragon_rect = {5400, 0, 900, 600};

    game_s->enemy[0].text =
        sfTexture_createFromFile("asset/character/dragon_fight.png", NULL);
    game_s->enemy[0].rect = dragon_rect;
    game_s->enemy[0].sprite = sfSprite_create();
    game_s->mage[5].text =
        sfTexture_createFromFile("asset/character/mage_fight.png", NULL);
    game_s->mage[5].rect = mage_rect;
    game_s->mage[5].sprite = sfSprite_create();
    game_s->fight[0].text =
        sfTexture_createFromFile("asset/fight/forest.png", NULL);
    game_s->fight[0].sprite = sfSprite_create();
    set_fight2(game_s);
    set_position(game_s);
}
