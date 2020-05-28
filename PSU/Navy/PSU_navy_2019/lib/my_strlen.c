/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** takes a string and returns it's number of characters
*/

int my_strlen(const char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
