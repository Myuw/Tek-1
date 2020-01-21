/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** get_next_line
*/

#include "get_next_line.h"

int check_buffer(char const *buffer, int n)
{
    int len = 0;

    if (n == 0) {
        if (buffer == NULL)
            return (0);
        for (int i = 0; buffer[i] != '\0'; i++)
            if (buffer[i] == '\n')
                return (1);
        return (0);
    } else if (n == 1) {
        if (buffer == NULL)
            return (0);
        for (len = 0; buffer[len] != '\0'; len++);
        return (len);
    }
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int len = check_buffer(src, 1);

    dest = malloc(sizeof(char) * len);
    while (src[i] != '\n') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strcat(char *s1, char *s2)
{
    char *result = result = malloc(sizeof(char) * (check_buffer(s1, 1) +\
                                                    check_buffer(s2, 1) + 1));
    int i = 0;

    if (s1 == NULL) {
        for (; *s2 != '\0'; i++)
            result[i] = *s2++;
        result[i] = '\0';
        return (result);
    } else {
        for (i = 0; *s1 != '\0'; i++)
            result[i] = *s1++;
        for (; *s2 != '\0'; i++)
            result[i] = *s2++;
        result[i] = '\0';
        return (result);
    }
}

char *free_buffer(char *buffer)
{
    int i = 0;
    int j = 0;
    int len = check_buffer(buffer, 1);
    char *result;

    for (i = 0; buffer[i] != '\n'; i++);
    result = malloc(sizeof(char) * (len - i));
    i++;
    for (j = 0; buffer[i] != '\0'; j++, i++) {
        result[j] = buffer[i];
    }
    result[j] = '\0';
    free(buffer);
    return (result);
}

char *get_next_line(int fd)
{
    static char *buffer = NULL;
    char *tmp = malloc(sizeof(char) * (READ_SIZE + 1));
    char *result = NULL;
    int count = 0;

    if (READ_SIZE <= 0 || fd < 0 || tmp == NULL)
        return (NULL);
    while (check_buffer(buffer, 0) == 0) {
        count = read(fd, tmp, READ_SIZE);
        if (count <= 0)
            return (NULL);
        tmp[count] = '\0';
        buffer = my_strcat(buffer, tmp);
    }
    free(tmp);
    result = my_strcpy(result, buffer);
    buffer = free_buffer(buffer);
    return (result);
}

int main(int ac, char **av)
{
    int fd = open(av[1], O_RDONLY);
    printf("%s\n", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
    printf("%s\n", get_next_line(fd));
    return (0);  
}
