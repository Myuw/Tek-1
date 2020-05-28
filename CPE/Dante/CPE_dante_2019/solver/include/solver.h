/*
** EPITECH PROJECT, 2020
** header
** File description:
** header
*/

#ifndef SOLVER_H_
#define SOLVER_H_

typedef struct map_s
{
    int x;
    int y;
    char **map;
} map_t;

typedef struct max_s
{
    int max_x;
    int max_y;
} max_t;

void print_map(char **map);
void free_map(map_t *map, max_t *max);
void right_wall_follower(char *buffer);

int open_read_file(char *filepath);
int check_in_out(char **map);
int check_out(char **map);

char **strtab(char *str, char c);
char **move_in_maze(map_t *map, max_t *max);

map_t *rat_in_maze(map_t *map, max_t *max, char *buffer);
map_t *no_up(map_t *map, max_t *max);
map_t *no_down(map_t *map, max_t *max);
map_t *no_left(map_t *map, max_t *max);
map_t *no_right(map_t *map, max_t *max);
map_t *all_direction(map_t *map);

#endif /* !SOLVER_H_ */