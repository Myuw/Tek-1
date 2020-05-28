/*
** EPITECH PROJECT, 2019
** test_my_putint.c
** File description:
** unit tests for my_putint
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

extern void redirect(void);

Test (my_putint, simple_integer, .init = redirect)
{
    my_putint(99);
    cr_assert_stdout_eq_str("99");
}

Test (my_putint, simple_negative_integer, .init = redirect)
{
    my_putint(-42);
    cr_assert_stdout_eq_str("-42");
}
