/*
** EPITECH PROJECT, 2020
** inventory main
** File description:
** inventory main file
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "inv_fct.h"
#include "fight_fct.h"
#include "game_struct.h"

int check_inv_skill(sfSprite *sprite, game_t *game_s)
{
    sfFloatRect rect;
    sfVector2f pos;
    sfVector2f mouse;
    int check = 0;

    rect = sfSprite_getLocalBounds(sprite);
    pos = sfSprite_getPosition(sprite);
    mouse = sfSprite_getPosition(game_s->mage[0].sprite);
    if ((mouse.x + 20) >= (rect.left + pos.x) &&
        (mouse.x - 20) <= (rect.width + pos.x))
        check++;
    if ((mouse.y - 20) <= (rect.height + pos.y) &&
        (mouse.y + 20) >= (rect.top + pos.y))
        check++;
    if (check == 2) {
        return (1);
    }
    return (0);
}

int check_click_skill(sfRenderWindow *window, sfSprite *sprite)
{
    sfFloatRect rect;
    sfVector2f pos;
    sfVector2i mouse;
    int check = 0;

    rect = sfSprite_getLocalBounds(sprite);
    pos = sfSprite_getPosition(sprite);
    mouse = sfMouse_getPositionRenderWindow(window);
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (mouse.x >= (rect.left + pos.x) && mouse.x <= (rect.width + pos.x))
            check++;
        if (mouse.y <= (rect.height + pos.y) && mouse.y >= (rect.top + pos.y))
            check++;
    }
    if (check == 2)
        return (1);
    return (0);
}

void drawing_loop(game_t *game_s, int i, sfRenderWindow *window)
{
    if (game_s->def_s[i].state == 0)
        sfRenderWindow_drawSprite(window, game_s->def_s[i].sprite_obj, NULL);
    if (game_s->atk_s[i].state == 0)
        sfRenderWindow_drawSprite(window, game_s->atk_s[i].sprite_obj, NULL);
    if (game_s->spd_s[i].state == 0)
        sfRenderWindow_drawSprite(window, game_s->spd_s[i].sprite_obj, NULL);
}

int drawing_skill_map(sfRenderWindow *window, game_t *game_s, int beg, int end)
{
    int i = 0;
    int check_def = 0;
    int check_atk = 0;
    int check_spd = 0;

    for (i = beg; i < end; i++) {
        check_def = check_inv_skill(game_s->def_s[i].sprite_obj, game_s);
        check_atk = check_inv_skill(game_s->atk_s[i].sprite_obj, game_s);
        check_spd = check_inv_skill(game_s->spd_s[i].sprite_obj, game_s);
        if (check_def == 1)
            game_s->def_s[i].state = 1;
        if (check_atk == 1)
            game_s->atk_s[i].state = 1;
        if (check_spd == 1)
            game_s->spd_s[i].state = 1;
        drawing_loop(game_s, i, window);
    }
    return (0);
}

int display_inv(sfRenderWindow *window, game_t *game_s)
{
    check_scene(game_s, window);
    if (sfKeyboard_isKeyPressed(sfKeyI) == sfTrue) {
        if (game_s->collision[0].front_castle == false)
            set_scale_scene(game_s);
        else
            set_frontcastle_scale(game_s);
        sfRenderWindow_drawSprite(window, game_s->inv_s.sprite, NULL);
        drawing_defense_inventory(window, game_s);
        drawing_attack_inventory(window, game_s);
        drawing_speed_inventory(window, game_s);
    }
    return (0);
}
