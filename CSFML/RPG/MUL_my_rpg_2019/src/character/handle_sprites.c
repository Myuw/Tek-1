/*
** EPITECH PROJECT, 2020
** sprites
** File description:
** initialisation
*/
#include "game_struct.h"
#include "fight.h"
#include "fight_fct.h"

void item_to_stat(game_t *game_s)
{
    static int item[1][6];

    for (int i = 1; i != 7; i++)
        if (game_s->def_s[i].state == 1 && item[0][i] != 1) {
            item[0][i] = 1;
            game_s->mage[1].rect.top = 0;
        }
    for (int i = 1; i != 7; i++)
        if (game_s->atk_s[i].state == 1 && item[1][i] != 1) {
            item[1][i] = 1;
            game_s->mage[3].rect.top = 0;
        }
}

void set_sprite2(game_t *game_s)
{
    sfIntRect mp_rect = {0, 0, 212, 30};
    sfIntRect dragon_rect = {0, 0, 50, 50};

    game_s->mage[3].text =
        sfTexture_createFromFile("asset/character/mp2.png", NULL);
    game_s->mage[3].sprite = sfSprite_create();
    game_s->mage[3].rect = mp_rect;
    game_s->mage[3].pos.y = game_s->mage[2].pos.y + 50;
    game_s->mage[3].pos.x = game_s->mage[2].pos.x + 225;
    game_s->mage[4].text =
        sfTexture_createFromFile("asset/character/dragon.png", NULL);
    game_s->mage[4].sprite = sfSprite_create();
    game_s->mage[4].pos.x = 700;
    game_s->mage[4].pos.y = 200;
    game_s->mage[4].rect = dragon_rect;
}

void set_sprite(game_t *game_s)
{
    sfIntRect mage_rect = {0, 0, 50, 50};
    sfIntRect pv_rect = {0, 0, 225, 40};
    game_s->mage[0].text = sfTexture_createFromFile
    ("asset/character/mage.png", NULL);
    game_s->mage[0].sprite = sfSprite_create();
    game_s->mage[0].pos.x = 930;
    game_s->mage[0].pos.y = 550;
    game_s->mage[0].rect = mage_rect;
    game_s->mage[1].text = sfTexture_createFromFile
    ("asset/character/pv.png", NULL);
    game_s->mage[1].sprite = sfSprite_create();
    game_s->mage[1].rect = pv_rect;
    game_s->mage[2].text = sfTexture_createFromFile
    ("asset/character/mage_life.png", NULL);
    game_s->mage[2].sprite = sfSprite_create();
    game_s->mage[2].pos.x = 30;
    game_s->mage[2].pos.y = 900;
    game_s->mage[1].pos.y = game_s->mage[2].pos.y + 24;
    game_s->mage[1].pos.x = game_s->mage[2].pos.x + 225;
    set_sprite2(game_s);
}

void handle_sprite(game_t *game_s, sfRenderWindow *window)
{
    display_sprites(game_s, window);
    item_to_stat(game_s);
}

void display_sprites(game_t *game_s, sfRenderWindow *window)
{
    for (int i = 0; i != 5; i++) {
        if (i == 0 || i == 4) {
            sfSprite_setTexture(game_s->mage[i].sprite,
                                game_s->mage[i].text, sfTrue);
            sfSprite_setTextureRect(game_s->mage[i].sprite,
                                    game_s->mage[i].rect);
            sfSprite_setPosition(game_s->mage[i].sprite, game_s->mage[i].pos);
            sfRenderWindow_drawSprite(window, game_s->mage[i].sprite, NULL);
        }
    }
    sfSprite_setPosition(game_s->enemy[2].sprite, game_s->enemy[2].pos);
    sfSprite_setTexture(game_s->enemy[2].sprite, game_s->enemy[2].text, sfTrue);
    sfRenderWindow_drawSprite(window, game_s->enemy[2].sprite, NULL);
}
