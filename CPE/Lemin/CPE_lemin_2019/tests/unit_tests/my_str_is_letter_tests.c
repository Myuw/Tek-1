/*
** EPITECH PROJECT, 2020
** my_str_is_lettes_tests
** File description:
** unit tests of my_str_is_letter function
*/

#include <criterion/criterion.h>
#include "lemin.h"
#include "unit_tests.h"

Test(my_str_is_letter, testing_my_str_is_letter_space)
{
    char c = ' ';
    int i = 0;
    int result = 0;

    result = my_str_is_letter(c);
    cr_assert_eq(i, result);
}

Test(my_str_is_letter, testing_my_str_is_letter_backslashn)
{
    char c = '\n';
    int i = 0;
    int result = 0;

    result = my_str_is_letter(c);
    cr_assert_eq(i, result);
}

Test(my_str_is_letter, testing_my_str_is_letter_special_character)
{
    char c = '*';
    int i = 0;
    int result = 0;

    result = my_str_is_letter(c);
    cr_assert_eq(i, result);
}

Test(my_str_is_letter, testing_my_str_is_letter_a)
{
    char c = 'a';
    int i = -1;
    int result = 0;

    result = my_str_is_letter(c);
    cr_assert_eq(i, result);
}
