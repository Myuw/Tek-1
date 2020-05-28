/*
** EPITECH PROJECT, 2020
** navy.h
** File description:
** header file for navy
*/

#ifndef NAVY_H
#define NAVY_H

struct {
    short x;
    short y;
    int enemy_pid;
    short hit;
    char **player_map;
    short eof;
} game;

unsigned int binary_to_decimal(char *binary_string);
int run_host(char *filepath);
int run_client(int pid, char *filepath);
int msg_send(unsigned int x, unsigned int y, int pid);
int my_check_input(char *input);
int victory(char **map);
int on_attack(unsigned int x, unsigned int y);
int attack_wait(void);
int my_check_buffer(char *buffer);
int no_same_params(char *buffer);
void input_to_position(char *input, int *x, int *y);
void signal_handlers(void);
void my_print_map(char **map);
void msg_wait(void);
void hit_or_missed(int i);
void on_attack_enemy_map(unsigned int x, unsigned int y, int i);
void my_print_message(char *input);
char **my_get_map(char *filepath);
char **my_strtab(char *str, char c);
char **my_map_boat(char **boat_coord, char **map);
char **my_map_boat(char **boat_coord, char **map);
char **my_strtab(char *str, char c);
char *my_get_input(void);
#endif
