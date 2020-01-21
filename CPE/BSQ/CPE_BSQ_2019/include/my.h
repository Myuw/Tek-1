/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#ifndef _MY_H_
#define _MY_H_

#include <stdarg.h>

void my_putchar(char c);

int my_isneg(int nb);

int my_put_nbr(int nb);

int my_put_nbr_unsigned_int(int nb);

void my_swap(int *a, int *b);

void my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr (char *str);

char *my_strstr(char *str, char const *to_find);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_isnum (char const *str);

int my_str_islower(char const *str);

int my_str_isupper(char const *str);

int my_str_isprintable(char const *str);

int my_showstr(char const *str);

int my_showmem (char const *str, int size);

char *my_strcat(char * dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

char *my_itoa(int nb);

int my_atoi(char *str);

int my_disp_stdarg(char *str, va_list list);

int my_sum_stdarg(int i, int nb, va_list list);

int my_printf(char *str, ...);

int my_dtob(unsigned int nb);

long int my_dtoh(unsigned long int nb);

long int my_dtoh_2(unsigned long int nb);

void my_dtoh_x2(unsigned long int nb);

void my_dtoh_x(unsigned long int nb);

long int my_dtoo(unsigned long int nb, int d);

#endif /*_MY_H_*/
