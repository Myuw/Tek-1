/*
** EPITECH PROJECT, 2020
** miscellaneous.c
** File description:
** miscellaneous functions for handling signals
*/

#include <unistd.h>

void msg_wait(void)
{
    for (int i = 0; i < 8; i++)
        pause();
}

unsigned int binary_to_decimal(char *bin)
{
    int nb = 0;

    for (int i = 0; bin[i] != '\0'; i++) {
        nb = nb * 2 + bin[i] - 48;
    }
    return (nb);
}
