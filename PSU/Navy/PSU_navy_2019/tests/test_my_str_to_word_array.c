/*
** EPITECH PROJECT, 2019
** test_my_str_to_word_array.c
** File description:
** unit tests for str to word array
*/

#include <criterion/criterion.h>
#include "my.h"

int count_words(char *str, const char delimiter);
char *get_word(char **str, const char delimiter);
char **my_str_to_word_array(char *str, const char delimiter);

Test (count_words, simple_str)
{
    cr_assert_eq(count_words("je mange", ' '), 2);
}

Test (count_words, other_delimiter)
{
    cr_assert_eq(count_words("1,2,3,4", ','), 4);
}

Test (count_words, complex_str)
{
    cr_assert_eq(count_words("    ceci      est  ", ' '), 2);
}

Test (str_to_word_array, simple_integration)
{
    char **result = my_str_to_word_array("je mange", ' ');

    cr_assert_str_eq(result[0], "je");
    cr_assert_str_eq(result[1], "mange");
    free(result[0]);
    free(result[1]);
    free(result);
}
