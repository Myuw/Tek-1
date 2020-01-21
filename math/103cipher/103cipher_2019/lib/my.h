/*
** EPITECH PROJECT, 2019
** my
** File description:
** header file for my library
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>

void my_putchar(char c);
void my_putint(int nb);
void va_my_putchar(va_list list);
void va_my_putstr(va_list list);
void va_my_putint(va_list list);
void va_my_putpercent(va_list list);
void va_my_putbinary(va_list list);
void va_my_putoctal(va_list list);
void va_my_puthexup(va_list list);
void va_my_puthexlo(va_list list);
void va_my_putuint(va_list list);
void va_my_putsastr(va_list list);
void va_my_putptr(va_list list);
void my_putsastr(char const *str);
int str_compare(char c, char *str);
int my_printf(const char *format, ...);
int my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
int my_stoi(char *str);
int my_ten_pow(int nb);
char *my_base_converter(unsigned long int decimal, int base, \
unsigned char alpha);
char *my_revstr(char *str);
char *my_itos(int nb);

#endif
