/*
** EPITECH PROJECT, 2019
** my
** File description:
** header file for my library
*/

#pragma once

#include <stdarg.h>

#ifndef READ_SIZE
    #define READ_SIZE 2048
#endif

enum {
    success,
    failure = 84
};

typedef enum {
    false,
    true
} bool;

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
void free_str_array(char **array);
void print_str_array(char **array);
int str_compare(char c, char *str);
int my_printf(const char *format, ...);
int my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen(char const *str);
int my_stoi(char *str);
int my_ten_pow(int nb);
int my_puterr(char const *str);
char *my_strcpy(const char *src);
char *my_base_converter(unsigned long int decimal, int base, \
unsigned char alpha);
char *my_revstr(char *str);
char *my_itos(int nb);
char *get_next_line(int fd);
char *my_strcat(char *s0, char *s1);
char **my_str_to_word_array(char *str, const char delimiter);
