/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** Task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && n > 0) {
        dest[i] = src[i];
        i++;
    }
    if (n <= i)
        dest[i] = '\0';
    return (dest);
}
