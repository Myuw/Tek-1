/*
** EPITECH PROJECT, 2020
** main
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"
#include <stddef.h>
#include <stdlib.h>
#include <curses.h>
#include <term.h>

void init_params_game(input_t *input)
{
    input->left = tigetstr("kcub1");
    input->right = tigetstr("kcuf1");
    input->turn = tigetstr("kcuu1");
    input->drop = tigetstr("kcud1");
    input->quit = 113;
    input->pause = 32;
    input->next = true;
    input->level = 1;
    input->row = 20;
    input->col = 10;
    input->debug = false;
}

void change_escape_sequence(input_t *input)
{
    (void)long_options;
    input->left[0] = 'E';
    input->right[0] = 'E';
    input->turn[0] = 'E';
    input->drop[0] = 'E';
}

void display_usage(char *binary)
{
    my_putstr("Usage:\t");
    my_putstr(binary);
    my_putstr(" [options]\n");
    my_putstr("Options:\n");
    my_putstr(" --help\t\t\tDisplay this help\n");
    my_putstr(" -L --level={num}\tStart Tetris at level num (def: 1)\n");
    my_putstr(" -l --key-left={K}\tMove the tetrimino LEFT using the K key\
(def: left arrow)\n");
    my_putstr(" -r --key-right={k}\tMove the tetrimino RIGHT using the K key\
(def: right arrow)\n");
    my_putstr(" -t --key-turn={k}\tTURN the tetrimino clockwise 90d using the\
K key (def: top arrow)\n");
    my_putstr(" -d --key-drop={k}\tDROP the tetrimino using the K key\
(def: down arrow)\n");
    display_help_bis();
}

void display_help_bis(void)
{
    my_putstr(" -q --key-quit={k}\tQUIT the game using the K key\
(def: 'q' key)\n");
    my_putstr(" -p --key-pause={k}\tPAUSE/RESTART the game using\
the K key (def: space bar)\n");
    my_putstr(" --map-size={row,col}\tSet the numbers of rows and\
columns of the map (def: 20,10)\n");
    my_putstr(" -w --without-next\tHide next tetrimino (def: false)\n");
    my_putstr(" -D --debug\t\tDebug mode (def: false)\n");
}

int main(int ac, char **av, char **envp)
{
    input_t *input = malloc(sizeof(input_t));

    if (input == NULL || envp == NULL)
        return (84);
    if (ac == 1) {
        create_map();
        return (0);
    }
    if (ac == 2)
        if (my_strcmp(av[1], "--help") == 0) {
            display_usage(av[0]);
            return (0);
        }
    my_env(input, envp);
    which_options(ac, av, input);
    free(input);
    return (0);
}