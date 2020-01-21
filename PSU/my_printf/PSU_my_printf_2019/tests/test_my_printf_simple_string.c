/*
** EPITECH PROJECT, 2019
** test_my_printf_str
** File description:
** units test my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(char *str, ...);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, simple_string_2, .init = redirect_all_std)
{
    my_printf("ASTEK42");
    cr_assert_stdout_eq_str("ASTEK42");
}

Test(my_printf, simple_string_3, .init = redirect_all_std)
{
    my_printf("%%%%");
    cr_assert_stdout_eq_str("%%%%");
}

Test(my_printf, simple_string_4, .init = redirect_all_std)
{
    my_printf("oui oui");
    cr_assert_stdout_eq_str("oui oui");
}
