/*
** EPITECH PROJECT, 2020
** my_stwa.c
** File description:
** my_stwa.c
*/

#include <stdlib.h>

static int count_word(char const *str, char const cut)
{
    int nb_word = 0;

    for (int i = 0; str[i] != '\0'; i = i + 1) {
        while (str[i] == cut)
            i = i + 1;
        while (str[i] != cut && str[i] != '\0')
            i = i + 1;
        while (str[i] == cut)
            i = i + 1;
        nb_word = nb_word + 1;
    }
    return (nb_word);
}

static int *get_len_word(int nb_word, char const *str, char const cut)
{
    int j = 0;
    int len = 0;
    int *len_word = malloc(sizeof(int) * (nb_word + 1));

    for (int i = 0; str[i] != '\0'; j = j + 1) {
        len = 0;
        while (str[i] == cut)
            i = i + 1;
        while (str[i] != cut && str[i] != '\0') {
            i = i + 1;
            len = len + 1;
        }
        while (str[i] == cut)
            i = i + 1;
        len_word[j] = len;
    }
    len_word[nb_word] = 0;
    return (len_word);
}

char **my_stwa(char const *str, char const cut)
{
    int j = 0;
    int nb_word = count_word(str, cut);
    int *len_word = get_len_word(nb_word, str, cut);
    char **array = malloc(sizeof(char *) * (nb_word + 1));

    for (int y = 0; y < nb_word; y = y + 1) {
        array[y] = malloc(sizeof(char) * (len_word[y] + 1));
        while (str[j] == cut)
            j = j + 1;
        for (int x = 0; str[j] != cut && str[j] != '\0';
            j = j + 1, x = x + 1)
            array[y][x] = str[j];
        array[y][len_word[y]] = '\0';
        while (str[j] == cut)
            j = j + 1;
    }
    array[nb_word] = NULL;
    free(len_word);
    return (array);
}
