/*
** EPITECH PROJECT, 2020
** my_getenv
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"
#include <stdlib.h>
#include <stdio.h>
#include <curses.h>
#include <term.h>
#include <unistd.h>

void my_env(input_t *input, char **envp)
{
    char *buffer = NULL;

    (void)long_options;
    buffer = get_buffer(buffer, envp);
    init_params_game(input);
    free(buffer);
    change_escape_sequence(input);
}

char **my_str_env_cpy(char **env, char **envp)
{
    int i = 0;
    int j = 0;

    for (i = 0; envp[i]; i++);
    env = malloc(sizeof(char *) * (i + 1));
    for (i = 0; envp[i]; i++) {
        for (j = 0; envp[i][j] != '\0'; j++);
        env[i] = malloc(sizeof(char) * (j + 1));
    }
    for (i = 0; envp[i]; i++) {
        for (j = 0; envp[i][j] != '\0'; j++)
            env[i][j] = envp[i][j];
        env[i][j] = '\0';
    }
    env[i] = NULL;
    return (env);
}

char *my_get_term(char **env, char *term)
{
    int i = 0;

    for (; env[i]; i++)
        if (strcmp_env("TERM", env[i], 3) == 0) {
            strcpy_env(env[i], term, 5);
            return (term);
        }
    return (NULL);
}

char *get_buffer(char *buffer, char **envp)
{
    char **env = NULL;
    char *term = NULL;

    env = my_str_env_cpy(env, envp);
    term = my_get_term(env, term);
    setupterm(NULL, STDOUT_FILENO, NULL);
    for (int i = 0; env[i]; i++)
        free(env[i]);
    free(env);
    free(term);
    return (buffer);
}