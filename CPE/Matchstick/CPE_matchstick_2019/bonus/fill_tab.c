/*
** EPITECH PROJECT, 2020
** fill_tab
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"

char **fill_tab(char **tab, int i)
{
    for (int x = 0 ; x < i + 2; x++)
        for (int y = 0; y < i * 2 + 1; y++)
            tab[x][y] = '*';
    for (int x = 1; x < i + 1; x++)
        for (int y = 1; y < i * 2; y++)
            tab[x][y] = (y <= i - x || y >= i + x) ? ' ' : '|';
    return (tab);
}
