/*
** EPITECH PROJECT, 2019
** units_test
** File description:
** unit_tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(char *str, ...);

void redirect_all_std_5(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, double_percent, .init = redirect_all_std_5)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, simple_hexadecimal, .init = redirect_all_std_5)
{
    my_printf("%x", 500);
    cr_assert_stdout_eq_str("1f4");
}

Test(my_printf, simple_hexadecimal_2, .init = redirect_all_std_5)
{
    my_printf("%X", 1234567);
    cr_assert_stdout_eq_str("12D687");
}

Test(my_printf, simple_binary, .init = redirect_all_std_5)
{
    my_printf("%b", 1234567);
    cr_assert_stdout_eq_str("100101101011010000111");
}

Test(my_printf, simple_unsigned_int, .init = redirect_all_std_5)
{
    my_printf("%u", -15);
    cr_assert_stdout_eq_str("4294967281");
}

Test(my_printf, simple_octal, .init = redirect_all_std_5)
{
    my_printf("%o", 1234567);
    cr_assert_stdout_eq_str("4553207");
}

Test(my_printf, simple_pointer, .init = redirect_all_std_5)
{
    my_printf("%p", 1234567);
    cr_assert_stdout_eq_str("0x12d687");
}

Test(my_dtob, simple_binary, .init = redirect_all_std_5)
{
    cr_assert_str_eq(my_dtob(1234567), 100101101011010000111);
}

Test(my_printf, simple_octal2, .init = redirect_all_std_5)
{
    my_printf("#%o", 1234567);
    cr_assert_stdout_eq_str("#4553207");
}
