/*
** EPITECH PROJECT, 2020
** main_menu_music
** File description:
** defender
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include "my.h"
#include "defender.h"

sfMusic *main_menu_music(sfMusic *music)
{
    music = sfMusic_createFromFile("asset/main_menu.ogg");
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}