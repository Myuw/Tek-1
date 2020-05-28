/*
** EPITECH PROJECT, 2020
** strcmp_term
** File description:
** tetris
*/

int strcmp_env(char const *s1, char const *s2, int j)
{
    int i = 0;

    while (i != j) {
        if (s1[i] != s2[i])
            return (1);
        i++;
    }
    return (0);
}