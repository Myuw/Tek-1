/*
** EPITECH PROJECT, 2020
** debug_mode
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"

void debug_mode(input_t *input)
{
    (void)long_options;
    my_putstr("*** DEBUG MODE ***\n");
    print_left_right_key(input);
    print_turn_drop_key(input);
    print_quit_pause_key(input);
    print_next_level_key(input);
    print_size_key(input);
    check_tetriminos_folder(input);
    create_map();
}