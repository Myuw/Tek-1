/*
** EPITECH PROJECT, 2020
** fight animations
** File description:
** mage
*/
#include "game_struct.h"
#include "fight_fct.h"

int move_rect2(sfIntRect rect, int offset, int max_value, int init)
{
    if (rect.left == max_value) {
        rect.left = init;
    } else {
        rect.left -= offset;
    }
    return (rect.left);
}

int move_rect3(sfIntRect rect, int offset, int max_value)
{
    if (rect.left == max_value) {
        rect.left = 2250;
    } else {
        rect.left += offset;
    }
    return (rect.left);
}

void animate_fight(game_t *game_s, sfClock *c, sfTime t, int end)
{
    float s;

    t = sfClock_getElapsedTime(c);
    s = t.microseconds / 100000.0;
    if (s > 2) {
        if (end == 0)
            game_s->mage[5].rect.left =
                move_rect2(game_s->mage[5].rect, 450, end, 5400);
        else
            game_s->mage[5].rect.left =
                move_rect3(game_s->mage[5].rect, 450, end);
        sfClock_restart(c);
    }
}

void attack_dragon(game_t *game_s, int i)
{
    static int mvt = 0;
    float s;

    if (i == 1)
        mvt = 1;
    if (mvt != 0) {
        game_s->anim.time = sfClock_getElapsedTime(game_s->anim.clock);
        s = game_s->anim.time.microseconds / 100000.0;
        if (s > 2) {
            game_s->enemy[0].rect.left =
                move_rect2(game_s->enemy[0].rect, 900, 0, 5400);
            sfClock_restart(game_s->anim.clock);
        }
    }
    if (game_s->enemy[0].rect.left == 0) {
        mvt = 0;
        game_s->enemy[0].rect.left = 5400;
        game_s->mage[1].rect.top += 40;
    }
}

int attack_mage(game_t *game_s, int i, int rect)
{
    static int mvt = -1;
    static int run = 0;
    static int mana = 0;

    if (i == 1 && mana != 270)
        mvt = rect;
    if (mvt != -1)
        animate_fight(game_s, game_s->anim.clock, game_s->anim.time, mvt);
    if (game_s->mage[5].rect.left == mvt) {
        if (mvt == 0)
            mana = handle_mana(game_s, mvt);
        mvt = -1;
        game_s->mage[5].rect.left = 2250;
        attack_dragon(game_s, 1);
        attack_boss(game_s, 1);
    }
    if (i == 2 || run != 0) {
        run++;
        game_s->mage[5].pos.x -= 5;
    }
    if (game_s->mage[5].pos.x < -350) {
        run = 0;
        game_s->mage[5].pos.x = 300;
        return (-1);
    }
    return (0);
}
