/*
** EPITECH PROJECT, 2019
** test_my_strcmp.c
** File description:
** unit tests for my_strcmp
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_strcmp, equal_comparison)
{
    cr_assert(my_strcmp("frite", "frite") == 0);
}

Test (my_strcmp, unequal_comparison)
{
    cr_assert(my_strcmp("frite", "frate") == 1);
}

Test (my_strcmp, unequal_length)
{
    cr_assert(my_strcmp("fri", "frite") == -1);
}
