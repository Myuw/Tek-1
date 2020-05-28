/*
** EPITECH PROJECT, 2020
** print_debug_mode
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"

void print_left_right_key(input_t *input)
{
    (void)long_options;
    my_putstr("Key left : ");
    if ((input->left[0]) == ' ')
        my_putstr("(space)\n");
    else {
        if (input->left[0] == 'E')
            my_putchar('^');
        my_putstr(input->left);
        my_putchar('\n');
    }
    my_putstr("Key right : ");
    if ((input->right[0]) == ' ')
        my_putstr("(space)\n");
    else {
        if (input->left[0] == 'E')
            my_putchar('^');
        my_putstr(input->right);
        my_putchar('\n');
    }
}

void print_turn_drop_key(input_t *input)
{
    my_putstr("Key turn : ");
    if ((input->turn[0]) == ' ')
        my_putstr("(space)\n");
    else {
        if (input->left[0] == 'E')
            my_putchar('^');
        my_putstr(input->turn);
        my_putchar('\n');
    }
    my_putstr("Key drop : ");
    if ((input->drop[0]) == ' ')
        my_putstr("(space)\n");
    else {
        if (input->drop[0] == 'E')
            my_putchar('^');
        my_putstr(input->drop);
        my_putchar('\n');
    }
}

void print_quit_pause_key(input_t *input)
{
    my_putstr("key quit : ");
    if ((input->quit) == ' ')
        my_putstr("(space)\n");
    else {
        my_putchar(input->quit);
        my_putchar('\n');
    }
    my_putstr("Key pause : ");
    if ((input->pause) == ' ')
        my_putstr("(space)\n");
    else {
        my_putchar(input->pause);
        my_putchar('\n');
    }
}

void print_next_level_key(input_t *input)
{
    my_putstr("Next : ");
    if ((input->next) == false)
        my_putstr("No\n");
    else
        my_putstr("Yes\n");
    my_putstr("Level : ");
    my_put_nbr(input->level);
    my_putchar('\n');
}

void print_size_key(input_t *input)
{
    my_putstr("Size : ");
    my_put_nbr(input->row);
    my_putchar('*');
    my_put_nbr(input->col);
    my_putchar('\n');
}