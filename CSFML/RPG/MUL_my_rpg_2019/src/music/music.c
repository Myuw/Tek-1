/*
** EPITECH PROJECT, 2020
** music
** File description:
** rpg
*/

#include "game_struct.h"

void village_music(game_t *game)
{
    game->music.music = sfMusic_createFromFile("asset/music/village.ogg");
    sfMusic_play(game->music.music);
    sfMusic_setLoop(game->music.music, sfTrue);
}

void front_castle_music(game_t *game)
{
    sfMusic_destroy(game->music.music);
    game->music.music = sfMusic_createFromFile("asset/music/front.ogg");
    sfMusic_play(game->music.music);
    sfMusic_setLoop(game->music.music, sfTrue);
}

void first_floor_music(game_t *game)
{
    sfMusic_destroy(game->music.music);
    game->music.music = sfMusic_createFromFile("asset/music/first.ogg");
    sfMusic_play(game->music.music);
    sfMusic_setLoop(game->music.music, sfTrue);
}

void boss_floor_music(game_t *game)
{
    sfMusic_destroy(game->music.music);
    game->music.music = sfMusic_createFromFile("asset/music/boss.ogg");
    sfMusic_play(game->music.music);
    sfMusic_setLoop(game->music.music, sfTrue);
}

void manage_music(game_t *game)
{
    if (game->collision[0].start == true) {
        sfMusic_destroy(game->music.music);
        village_music(game);
    }
    if (game->collision[0].village == true) {
        sfMusic_destroy(game->music.music);
        village_music(game);
    }
    if (game->collision[0].front_castle == true)
        front_castle_music(game);
    if (game->collision[0].first_floor == true)
        first_floor_music(game);
    if (game->collision[0].boss == true)
        boss_floor_music(game);
}