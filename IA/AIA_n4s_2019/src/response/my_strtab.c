/*
** EPITECH PROJECT, 2020
** my_strtab
** File description:
** n4s
*/

#include <stddef.h>
#include <stdlib.h>

int n_words(char const *str, char delim)
{
    int n = 1;
    for (int i = 0; str[i]; i++)
        if (str[i] == delim)
            n++;
    return n;
}

static int word_len(char const *str, char delim)
{
    int i = 0;
    while (str[i]) {
        if (str[i] == delim)
            break;
        i++;
    }
    return i;
}

char **my_strtab(char const *str, char delim)
{
    int n = n_words(str, delim), j, cur_word_len = 0;
    char **arr = malloc(sizeof(char *) * (n + 1));
    for (int i = 0; i < n && *str; i++) {
        cur_word_len = word_len(str, delim);
        arr[i] = malloc(sizeof(char) * cur_word_len);
        for (j = 0; j < cur_word_len; j++)
            arr[i][j] = *str++;
        arr[i][j] = 0;
        str++;
    }
    return arr;
}