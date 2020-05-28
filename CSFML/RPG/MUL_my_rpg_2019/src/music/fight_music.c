/*
** EPITECH PROJECT, 2020
** fight_music
** File description:
** rpg
*/

#include "game_struct.h"

void boss_music(game_t *game)
{
    sfMusic_destroy(game->music.music);
    game->music.music = sfMusic_createFromFile("asset/music/boss_fight.ogg");
    sfMusic_play(game->music.music);
    sfMusic_setLoop(game->music.music, sfTrue);
}

void normal_fight_music(game_t *game)
{
    sfMusic_destroy(game->music.music);
    game->music.music = sfMusic_createFromFile
    ("asset/music/normal_fight.ogg");
    sfMusic_play(game->music.music);
    sfMusic_setLoop(game->music.music, sfTrue);
}