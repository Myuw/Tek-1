/*
** EPITECH PROJECT, 2020
** parsing
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"
#include <stddef.h>
#include <stdlib.h>

void bool_options(input_t *input, int opt)
{
    switch (opt)
    {
        case 'w':
            input->next = false;
            break;
        case 'D':
            input->debug = true;
            break;
        default:
            break;
    }
}

void size_map_options(input_t *input, int opt)
{
    switch (opt)
    {
        case 'm':
            input->row = my_getnbr(optarg);
            input->col = get_col(optarg);
            break;
        default:
            bool_options(input, opt);
            break;
    }
}

void pause_quit_options(input_t *input, int opt)
{
    switch (opt)
    {
        case 'q':
            input->quit = optarg[0];
            break;
        case 'p':
            input->pause = optarg[0];
            break;
        default:
            size_map_options(input, opt);
            break;
    }
}

void arrow_options(input_t *input, int opt)
{
    switch (opt)
    {
        case 'l':
            input->left = optarg;
            break;
        case 'r':
            input->right = optarg;
            break;
        case 't':
            input->turn = optarg;
            break;
        case 'd':
            input->drop = optarg;
            break;
        default:
            pause_quit_options(input, opt);
            break;
    }
}

void which_options(int ac, char **av, input_t *input)
{
    int opt = 0;
    while ((opt = getopt_long(ac, av, "L:l:r:t:d:q:p:wD",
            long_options, NULL)) != -1) {
        switch (opt)
        {
            case 'L':
                input->level = my_getnbr(optarg);
                break;
            default:
                arrow_options(input, opt);
                break;
        }
    }
    if (optind < ac)
        exit(84);
    if (input->debug == true)
        debug_mode(input);
    else
        create_map();
}