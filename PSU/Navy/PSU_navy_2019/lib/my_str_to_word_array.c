/*
** EPITECH PROJECT, 2019
** my_str_to_array.c
** File description:
** takes a string, makes an array with NULL pointer at the end
*/

#include "my.h"
#include <stddef.h>
#include <stdlib.h>

int count_words(char *str, const char delimiter)
{
    int result = 0;

    while (str[0] != '\0') {
        for (; *str == delimiter; str++);
        if (str[0] == '\0')
            break;
        for (; *str != delimiter && *str != '\0'; str++);
        result++;
    }
    return (result);
}

char *get_word(char **str, const char delimiter)
{
    char *result = NULL;
    int len = 0;
    int i = 0;

    for (;*(*str + len) != delimiter && *(*str + len) != '\0'; len++);
    result = malloc(sizeof(char) * (len + 1));
    for (;*(*str) != delimiter && *(*str) != '\0'; (*str)++, i++) {
        result[i] = **str;
    }
    result[i] = '\0';
    return (result);
}

char **my_str_to_word_array(char *str, const char delimiter)
{
    int words_nbr = count_words(str, delimiter);
    int i = 0;
    char **result = malloc(sizeof(char *) * (words_nbr + 1));

    for (; i < words_nbr; i++) {
        for (; *str == delimiter; str++);
        result[i] = get_word(&str, delimiter);
    }
    result[i] = NULL;
    return (result);
}

void free_str_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        free(array[i]);
    }
    free(array);
}

void print_str_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
    my_putstr("NULL");
    my_putchar('\n');
}
