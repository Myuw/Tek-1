/*
** EPITECH PROJECT, 2020
** main menu
** File description:
** main menu of the game
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include "main_menu.h"

int click_main_menu(sfRenderWindow *window,
sfMouseButton left_click, sfMusic *music)
{
    sfVector2i mouse_pos;

    mouse_pos = sfMouse_getPositionRenderWindow(window);
    if (mouse_pos.y > 300 && mouse_pos.x > 830 && mouse_pos.y < 415
        && mouse_pos.x < 1100) {
        click_on_play(window);
        return 1;
    }
    if (mouse_pos.y > 680 && mouse_pos.x > 830 && mouse_pos.y < 800
        && mouse_pos.x < 1100) {
        click_on_quit(window);
        return -1;
    }
    if (mouse_pos.y > 490 && mouse_pos.x > 830 && mouse_pos.y < 600
        && mouse_pos.x < 1100) {
        click_on_option(window, left_click, music);
        return 0;
    }
    return 0;
}

void main_menu_loop(sfRenderWindow *window, sfEvent event,
sfSprite *main_menu_sp, sfMusic *music)
{
    sfMouseButton left_click = sfMouseLeft;
    int click = 0;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            if (sfMouse_isButtonPressed(left_click) == 1)
                click = click_main_menu(window, left_click, music);
        }
        if (click != 0)
            break;
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, main_menu_sp, NULL);
        sfRenderWindow_display(window);
    }
    sfMusic_destroy(music);
    if (click == 1)
        initialise_game(window);
}

void initialise_main_menu(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};
    sfEvent event;
    sfTexture *main_menu_tx = sfTexture_createFromFile
    ("asset/main_menu/main_menu.png", NULL);
    sfSprite *main_menu_sp = sfSprite_create();
    sfMusic *music = NULL;

    window = sfRenderWindow_create(video_mode, "My RPG", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    sfSprite_setTexture(main_menu_sp, main_menu_tx, sfTrue);
    music = sfMusic_createFromFile("asset/music/opening.ogg");
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    main_menu_loop(window, event, main_menu_sp, music);
}

int main(int ac, char **av, char **env)
{
    if (ac == 2)
        if (av[1][0] == '-' && av[1][1] == 'h') {
            my_putstr(USAGE);
            return (0);
        }
    if (env == NULL || (env != NULL && env[0] == NULL)) {
        write(2, "Error: display are missing, we can't play :(\n", 45);
        return (84);
    }
    initialise_main_menu();
    return 0;
}
