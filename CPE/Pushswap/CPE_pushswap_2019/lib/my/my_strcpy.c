/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** my_strcpy.c
*/

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int len = my_strlen(src);

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[len] = '\0';
    return (dest);
}
