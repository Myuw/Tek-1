/*
** EPITECH PROJECT, 2019
** test_my_base_converter.c
** File description:
** unit tests for my_base_converter
*/

#include <criterion/criterion.h>
#include "my.h"

Test (base_converter, binary)
{
    cr_assert_str_eq(my_base_converter(4000000000, 2, '0'), \
    "11101110011010110010100000000000");
}

Test (base_converter, octal)
{
    cr_assert_str_eq(my_base_converter(4000000000, 8, '0'), "35632624000");
}

Test (base_converter, hex_uppercase)
{
    cr_assert_str_eq(my_base_converter(4000000000, 16, 'A'), "EE6B2800");
}

Test (base_converter, hex_lowercase)
{
    cr_assert_str_eq(my_base_converter(4000000000, 16, 'a'), "ee6b2800");
}

Test (base_converter, uint)
{
    cr_assert_str_eq(my_base_converter(4000000000, 10, 'a'), "4000000000");
}
