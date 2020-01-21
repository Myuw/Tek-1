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

void my_put_nbr(int nb);

void my_put_nbr_unsigned_int(int nb);

void my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

char *my_strcpy(char *dest, char const *src);

char *my_revstr (char *str);

int my_strcmp(char const *s1, char const *s2);

char *my_itoa(int nb);

int my_atoi(char *str);

int my_disp_stdarg(char *str, va_list list);

int my_sum_stdarg(int i, int nb, va_list list);

int my_printf(char *str, ...);

int my_dtob(unsigned int nb);

void my_dtoh(unsigned long int nb, char c, int d);

long int my_dtoh_2(unsigned long int nb);

void my_dtoh_x2(unsigned long int nb);

void my_dtoh_x(unsigned long int nb);

long int my_dtoo(unsigned long int nb, int d);

#endif /*_MY_H_*/
