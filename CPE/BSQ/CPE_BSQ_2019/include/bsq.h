/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** .h
*/

#ifndef BSQ_H
#define BSQ_H

#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))

int error_handling(int ac);

int open_read_file(char **av);

void nb_line_column(char *buffer);

void bsq(char *buffer, int line, int column);

int check_lowest_nbr(int a, int b, int c);

void print_tab_int(int **tab, int line, int column);

void **print_tab_char(char **tabb, int x, int y, int line, int nb);

void highest_nbr(int **tab, char **tabb, int line, int column);

void my_alloc(int **tab, char **tabb, int line, int column);

void my_free(int **tab, char **tabb, int line, int column);

int **tab_int(char *buffer, int **tab);

char **tab_char(char *buffer, char **tabb);

#endif
