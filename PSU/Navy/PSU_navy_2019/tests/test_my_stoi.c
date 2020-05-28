/*
** EPITECH PROJECT, 2019
** test_my_stoi.c
** File description:
** unit tests for my_stoi
*/

#include <criterion/criterion.h>
#include "my.h"

Test (my_stoi, simple_string)
{
    cr_assert(my_stoi("42") == 42);
}
