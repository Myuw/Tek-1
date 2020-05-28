/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** my_revstr.c
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char c = '\0';
    int len = my_strlen(str);

    for (int i = 0; i < (len / 2); i = i + 1) {
        c = str[i];
        str[i] = str[(len - 1) - i];
        str[(len - i) - 1] = c;
    }
    return (str);
}
