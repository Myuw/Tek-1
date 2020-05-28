/*
** EPITECH PROJECT, 2020
** libmy.h
** File description:
** libmy.h
*/

#ifndef LIBMY
#define LIBMY

void my_putchar(char const c);
void my_puterror(char const *str);
void my_putnbr(int nb);
void my_putstr(char const *str);
int my_atoi(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
char *my_itoa(int nb);
char *my_strdup(char const *src);
char **my_stwa(char const *str, char const cut);

#endif /* LIBMY */
