/*
** EPITECH PROJECT, 2020
** get_reponse
** File description:
** n4s
*/

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "n4s.h"
#include "strd.h"

static char *get_body(char *input)
{
    char *copy = NULL;
    int colons = 0;
    int j = 0;

    for (int i = 0; input[i] != '\0' && colons < 3; i++) {
        if (input[i] == ':')
            colons++;
        copy = input + (i + 1);
    }
    for (j = my_strlen(copy); copy[j] != ':'; j--);
    copy[j] = '\0';
    return (my_strcpy(copy));
}

static char *get_values(char *response_input, int colons)
{
    if (colons <= 4)
        return (NULL);
    else
        return (get_body(response_input));
}

static int get_colons(char *response_input)
{
    int colons = 0;

    for (int i = 0; response_input[i] != '\n'; i++) {
        if (response_input[i] == ':')
            colons++;
    }
    return (colons);
}

static char *get_additional_infos(char **tab)
{
    int i = 0;

    for (i = 0; tab[i]; i++);
    return (my_strcpy(tab[i - 1]));
}

response_t *get_response(char *response_input)
{
    response_t *response = malloc(sizeof(response_t));
    char **tab = NULL;
    int colons = 0;

    colons = get_colons(response_input);
    tab = my_strtab(response_input, ':');
    response->value_id = atoi(tab[0]);
    response->status = !strncmp(tab[1], "OK", 2);
    response->values = get_values(response_input, colons);
    response->additional_info = get_additional_infos(tab);
    return (response);
}
