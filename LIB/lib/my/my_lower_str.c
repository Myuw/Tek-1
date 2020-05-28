/*
** EPITECH PROJECT, 2020
** lower_str
** File description:
** lib
*/

char *lower_str(char *s)
{
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < 'a')
            s[i] = s[i] + 32;
        else if (s[i] > 'z')
            s[i] = s[i] - 32;
    }
    return (s);
}
