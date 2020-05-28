/*
** EPITECH PROJECT, 2019
** test_my_printf.c
** File description:
** unit tests for my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include <stdarg.h>
#include <stdio.h>

void redirect(void)
{
    cr_redirect_stdout();
}

Test (mprintf, string, .init = redirect)
{
    my_printf("lol");
    cr_assert_stdout_eq_str("lol");
}

Test (mprintf, string_flag, .init = redirect)
{
    my_printf("%s", "lol");
    cr_assert_stdout_eq_str("lol");
}

Test (mprintf, secured_string_flag_1, .init = redirect)
{
    my_printf("%S", "lol\a");
    cr_assert_stdout_eq_str("lol\\007");
}

Test (mprintf, secured_string_flag_2, .init = redirect)
{
    my_printf("%S", "lol\r");
    cr_assert_stdout_eq_str("lol\\015");
}

Test (mprintf, secured_string_flag_3, .init = redirect)
{
    my_printf("%S", "lol~");
    cr_assert_stdout_eq_str("lol~");
}

Test (mprintf, integer_flag, .init = redirect)
{
    my_printf("%i", 6);
    my_printf("%d", 9);
    cr_assert_stdout_eq_str("69");
}

Test (mprintf, hexlo_flag, .init = redirect)
{
    my_printf("%x", 42);
    cr_assert_stdout_eq_str("2a");
}

Test (mprintf, hexup_flag, .init = redirect)
{
    my_printf("%X", 42);
    cr_assert_stdout_eq_str("2A");
}

Test (mprintf, hexup_flag_large, .init = redirect)
{
    my_printf("%X", 4000000000);
    cr_assert_stdout_eq_str("EE6B2800");
}

Test (mprintf, uint_flag, .init = redirect)
{
    my_printf("%u", 42);
    cr_assert_stdout_eq_str("42");
}

Test (mprintf, unint_flag_large, .init = redirect)
{
    my_printf("%u", 4000000000);
    cr_assert_stdout_eq_str("4000000000");
}

Test (mprintf, octal_flag, .init = redirect)
{
    my_printf("%o", 42);
    cr_assert_stdout_eq_str("52");
}

Test (mprintf, char_flag, .init = redirect)
{
    my_printf("%c", 'R');
    cr_assert_stdout_eq_str("R");
}

Test (mprintf, percent_flag, .init = redirect)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test (mprintf, binary_flag, .init = redirect)
{
    my_printf("%b", 12);
    cr_assert_stdout_eq_str("1100");
}

Test (mprintf, ptr_flag, .init = redirect)
{
    char a = 'c';
    void *ptr = &a;
    char *result = NULL;
    result = malloc(sizeof(int) * 16);

    sprintf(result, "%p", ptr);
    my_printf("%p", ptr);
    cr_assert_stdout_eq_str(result);
    free(result);
}

Test (mprintf, unknown_flag)
{
    cr_assert(my_printf("%Z", "lol") == 84);
}
