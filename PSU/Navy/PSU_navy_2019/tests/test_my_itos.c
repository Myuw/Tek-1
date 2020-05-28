/*
** EPITECH PROJECT, 2019
** test_my_itos.c
** File description:
** unit tests for my_itos
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_itos, simple_int)
{
    cr_assert_str_eq(my_itos(21), "21");
}
