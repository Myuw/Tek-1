/*
** EPITECH PROJECT, 2019
** units_tests_simple_string_2
** File description:
** units_tests_simple_string_2
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(char *str, ...);

void redirect_all_std_2(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string_5, .init = redirect_all_std_2)
{
    my_printf("1234567890°+&é(-è_çà)=");
    cr_assert_stdout_eq_str("1234567890°+&é(-è_çà)=");
}

Test(my_printf, simple_string_6, .init = redirect_all_std_2)
{
    my_printf("www&c");
    cr_assert_stdout_eq_str("www&c");
}

Test(my_printf, simple_string_7, .init = redirect_all_std_2)
{
    my_printf("%%%%%%");
    cr_assert_stdout_eq_str("%%%%%%");
}
Test(my_printf, simple_string_8, .init = redirect_all_std_2)
{
    my_printf("WOAW UNITS TESTS");
    cr_assert_stdout_eq_str("WOAW UNITS TESTS");
}
