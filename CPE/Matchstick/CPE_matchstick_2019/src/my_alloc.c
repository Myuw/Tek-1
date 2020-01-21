/*
** EPITECH PROJECT, 2020
** my_alloc
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

void my_alloc(char **tab, int i)
{
    for (int j = 0; j < i + 2; j++) {
        tab[j] = malloc(sizeof(char) * ((i * 2) + 2));
        tab[j][i * 2 + 1] = '\0';
    }
    tab[i + 2] = NULL;
}
