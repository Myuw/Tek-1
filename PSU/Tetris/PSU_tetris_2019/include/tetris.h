/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** header for tetris project
*/

#ifndef TETRIS_H_
#define TETRIS_H_

#define MAX(a,b) (((a) > (b)) ? (a) : (b))

#include <getopt.h>
#include <stdbool.h>

static struct option long_options[] =
{
    {"level=", required_argument, 0, 'L'},
    {"key-left=", required_argument, 0, 'l'},
    {"key-right=", required_argument, 0, 'r'},
    {"key-turn=", required_argument, 0, 't'},
    {"key-drop=", required_argument, 0, 'd'},
    {"key-quit=", required_argument, 0, 'q'},
    {"key-pause=", required_argument, 0, 'p'},
    {"map-size=", required_argument, 0, 'm'},
    {"without-next", no_argument, 0, 'w'},
    {"debug", no_argument, 0, 'D'},
    {0, 0, 0, 0}
};

typedef struct input_s
{
    char *left;
    char *right;
    char *turn;
    char *drop;
    int quit;
    int pause;
    bool next;
    int level;
    int row;
    int col;
    bool debug;
} input_t;

typedef struct info_s
{
    char **buffer;
    int row;
    int col;
    int color;
} info_t;

typedef struct map_t
{
    char **array;
    int lines;
    int cols;
} map_t;

void which_options(int ac, char **av, input_t *input);
void my_env(input_t *input, char **envp);
void debug_mode(input_t *input);
void change_escape_sequence(input_t *input);
void init_params_game(input_t *input);
void print_left_right_key(input_t *input);
void print_turn_drop_key(input_t *input);
void print_quit_pause_key(input_t *input);
void print_next_level_key(input_t *input);
void print_size_key(input_t *input);
void check_tetriminos_folder(input_t *input);
void get_tetriminos_path(input_t *input, char *path);
void parse_tetrimino(input_t *input, char *tetrimino, char *tetrimino_name);
void error_tetrimino(char *tetrimino);
void puterror_tetrimino(char const *str);
void display_help_bis(void);

int check_tetrimino(char *tetrimino);
int get_col(char *str);
int strcmp_env(char const *s1, char const *s2, int j);
int check_tetrimino_nbr(input_t *input, char *tetrimino, info_t *info);

char *strcpy_env(char *src, char *dest, int i);
char *get_buffer(char *buffer, char **envp);

char **erase_bad_space(char **tab);

int create_map(void);

#endif /* TETRIS_H_ */