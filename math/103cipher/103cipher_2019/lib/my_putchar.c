/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** outputs the character given as an argument
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1 , &c, 1);
}
