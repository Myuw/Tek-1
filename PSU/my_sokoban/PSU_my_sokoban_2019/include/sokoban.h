/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#ifndef SOKOBAN_H
#define SOKOBAN_H

#define USAGE "USAGE\n\
    ./my_sokoban map\n\
DESCRIPTION\n\
    map  file representing the warhouse map, containing '#' for walls, \n\
        'P' for the players, 'X' for boxes and 'O' for storage locations. \n\
    press SPACE to reset map\n\
    press ESCAPE to quit the game"
#define MY_EXIT_SUCCESS 0
#define MY_EXIT_FAILURE 84
#define EXIT_FAILURE 1
#define LOSE 1
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

typedef struct pos_s
{
    int pos_p_x;
    int pos_p_y;
} pos_t;

void print_usage(void);

int error_handling(int ac);

int open_file(char **av);

int stat_file(int fd, char *filepath);

int read_file(int fd, int size);

int invalid_buffer(char *buffer);

void count_buffer(char *buffer);

void my_alloc(char **tab, int line , int column);

char **create_tab_char(char *buffer, char **tab);

void sokoban(char **tab, int line, int column, char *buffer);

pos_t get_pos_p(char **tab, int x, int y);

int get_pos_p_y(char **tab, int x, int y);

void display_tab(char **tab, int line);

char **move_down(char **tab, pos_t pos);

char **move_up(char **tab, pos_t pos);

char **move_left(char **tab, pos_t pos);

char **move_right(char **tab, pos_t pos);

void init_screen(void);

void start_sokoban(char **tab, int line);

char **getch_key(char **tab, pos_t pos, int i);

char **simple_down(char **tab, pos_t pos);

char **simple_up(char **tab, pos_t pos);

char **simple_left(char **tab, pos_t pos);

char **simple_right(char **tab, pos_t pos);

char **complex_down(char **tab, pos_t pos);

char **complex_up(char **tab, pos_t pos);

char **complex_left(char **tab, pos_t pos);

char **complex_right(char **tab, pos_t pos);

void defeat_condition(char **tab, int x, int y);

int check_defeat_condition(char **tab, int x, int y);

void resize_message(void);

#endif
