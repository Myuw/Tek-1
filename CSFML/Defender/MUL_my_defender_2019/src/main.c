/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "my.h"
#include "defender.h"

void initialise_game(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};
    window = sfRenderWindow_create(video_mode, "My Defender", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    sfMouseButton left_click = sfMouseLeft;
    create_main_menu(window, left_click);
}

int main (int ac, char **av)
{
    if (ac == 2)
        if (av[1][0] == '-' && av[1][1] == 'h') {
            my_putstr(USAGE);
            return (0);
    }
    if (ac == 1) {
        initialise_game();
        return 0;
    }
    return 84;
}
