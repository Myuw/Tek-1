
/*
** EPITECH PROJECT, 2019
** units_test_simple_digits_2
** File description:
** units_tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(char *str, ...);

void redirect_all_std_4(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_digits_5, .init = redirect_all_std_4)
{
    my_printf("%i", 10000);
    cr_assert_stdout_eq_str("10000");
}

Test(my_printf, simple_digits_6, .init = redirect_all_std_4)
{
    my_printf("%i", 100000);
    cr_assert_stdout_eq_str("100000");
}

Test(my_printf, simple_digits_7, .init = redirect_all_std_4)
{
    my_printf("%i", 1000000);
    cr_assert_stdout_eq_str("1000000");
}

Test(my_printf, simple_digits_8, .init = redirect_all_std_4)
{
    my_printf("%i", 10000000);
    cr_assert_stdout_eq_str("10000000");
} 
