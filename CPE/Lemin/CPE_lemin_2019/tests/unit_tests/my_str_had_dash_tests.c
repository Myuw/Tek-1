/*
** EPITECH PROJECT, 2020
** test
** File description:
** stumper
*/

#include <criterion/criterion.h>
#include "lemin.h"
#include "unit_tests.h"

Test(my_str_had_dash, testing_my_str_had_dash)
{
    char *node = "3 1 0\0";
    int i = 0;
    int result = 0;

    result = my_str_had_dash(node);
    cr_assert_eq(i, result);
}

Test(my_str_had_dash, testing_my_str_had_dash_1)
{
    char *node = "3 - 0\0";
    int i = 1;
    int result = 0;

    result = my_str_had_dash(node);
    cr_assert_eq(i, result);
}
