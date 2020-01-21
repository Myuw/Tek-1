/*
** EPITECH PROJECT, 2020
** matchstick header
** File description:
** matchstick
*/

#ifndef MATCHSTICK
#define MATCHSTICK

#define PLAYER_1_TURN "Player 1 removed %d match(es) from line %d\n"
#define PLAYER_2_TURN "Player 2 removed %d match(es) from line %d\n"

#define PLAYER_1_WIN 1
#define PLAYER_2_WIN 2
#define MY_EXIT_FAILURE 84

typedef struct input_s
{
    int input_line;
    int input_match;
    int nb_match_picked;
} input_t;

int print_map(char **av);

void my_alloc(char **tab, int i);

char **fill_tab(char **tab, int i);

void print_board(char **tab);

int game(char **board, int line, int matches);

int get_input_line(int line);

int get_input_matches(int matches, int line, char **board);

int check_input_line(char *buffer, int line);

int check_input_matches(char *buffer, int matches);

int check_line(char **board, int line, int matches);

int get_max_matches(char **board);

int manage_board(char **board, int line, int matches, int turn);

int ia_matchstick(char **board, int line);

int player_turn(char **board, int line, int matches, input_t *input);

int my_line(int line, input_t *input);

int my_match(char **board, int line, int matches, input_t *input);

void my_free(input_t *input, char **board, int i);

#endif
