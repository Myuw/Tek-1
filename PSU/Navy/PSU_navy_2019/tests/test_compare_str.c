/*
** EPITECH PROJECT, 2019
** test_compare_str.c
** File description:
** unit tests for compare_str
*/

#include <criterion/criterion.h>
#include "my.h"

Test (compare_str, find_occurence)
{
    cr_assert(str_compare('c', "c") == 0);
}
