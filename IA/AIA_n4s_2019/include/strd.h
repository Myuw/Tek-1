/*
** EPITECH PROJECT, 2019
** strd.h
** File description:
** header file for strd library
*/

#ifndef STRD_H
#define STRD_H

enum {
    SUCCESS,
    FAILURE = 84
};

#include <stdbool.h>

int my_stoi(char *);
char *my_itos(int);

void my_putchar(char);
void my_putint(int);
void my_puterr(char const *);
void my_putstr(char const *);

int my_strlen(char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_revstr(char *);
char *my_strcat(char *, char *);
char *my_strcpy(const char *);
void free_str_array(char **);
void print_str_array(char **);
char **my_str_to_word_array(char *, const char);
#endif
