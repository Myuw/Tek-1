/*
** EPITECH PROJECT, 2020
** strtab
** File description:
** lib function
*/

#include <stddef.h>
#include <stdlib.h>

char **strtab(char *str, char c)
{
    int i = 1;
    int nbr = 0;
    char **tab = NULL;

    for (int j = 0; str[j] != '\0'; j++)
        str[j] == c ? i++ : i;
    tab = malloc(sizeof(char *) * (i + 1));
    for (int j = 0, k = 0; j < i; j++, k++, nbr = 0) {
        for (; str[k] != c && str[k] != '\0'; k++, nbr++);
        tab[j] = malloc(sizeof(char) * (nbr + 1));
    }
    for (int x = 0, y = 0, z = 0; y < i; y++, z++, x = 0) {
        for (; str[z] != c && str[z] != '\0'; x++, z++)
            tab[y][x] = str[z];
        tab[y][x] = '\0';
    }
    tab[i] = NULL;
    free(str);
    return (tab);
}
