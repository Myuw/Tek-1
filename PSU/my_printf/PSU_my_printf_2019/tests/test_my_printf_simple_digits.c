/*
** EPITECH PROJECT, 2019
** units_tests_with_simple_digits
** File description:
** units_tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(char *str, ...);

void redirect_all_std_3(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_digits, .init = redirect_all_std_3)
{
    my_printf("%i", 1);
    cr_assert_stdout_eq_str("1");
}

Test(my_printf, simple_digits_2, .init = redirect_all_std_3)
{
    my_printf("%i", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, simple_digits_3, .init = redirect_all_std_3)
{
    my_printf("%i", 100);
    cr_assert_stdout_eq_str("100");
}

Test(my_printf, simple_digits_4, .init = redirect_all_std_3)
{
    my_printf("%i", 1000);
    cr_assert_stdout_eq_str("1000");
}
