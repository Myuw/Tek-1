/*
** EPITECH PROJECT, 2019
** open_stat_read_file
** File description:
** sokoban
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdarg.h>
#include "sokoban.h"
#include "my.h"

int open_file(char **av)
{
    int fd = 0;
    int rtn = 0;
    char *filepath = av[1];

    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (MY_EXIT_FAILURE);
    rtn = stat_file(fd, filepath);
    if (rtn == MY_EXIT_SUCCESS)
        return (MY_EXIT_SUCCESS);
    return (MY_EXIT_FAILURE);
}

int stat_file(int fd, char *filepath)
{
    int rtn = 0;
    int size = 0;
    struct stat st;

    stat(filepath, &st);
    size = st.st_size;
    rtn = read_file(fd, size);
    if (rtn == MY_EXIT_SUCCESS)
        return (MY_EXIT_SUCCESS);
    return (MY_EXIT_FAILURE);
}

int read_file(int fd, int size)
{
    int rtn = 0;
    int count = 0;
    char *buffer = NULL;

    buffer = malloc(sizeof(char) * (size + 1));
    count = read(fd, buffer, size);
    if (count == -1)
        return (MY_EXIT_FAILURE);
    buffer[count] = '\0';
    close(fd);
    rtn = invalid_buffer(buffer);
    if (rtn == MY_EXIT_SUCCESS) {
        count_buffer(buffer);
        return (MY_EXIT_SUCCESS);
    }
    return (MY_EXIT_FAILURE);
}

int invalid_buffer(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] != ' ' && buffer[i] != '\n' && buffer[i] != '#' && \
            buffer[i] != 'X' && buffer[i] != 'O' && buffer[i] != 'P')
            return (MY_EXIT_FAILURE);
    return (MY_EXIT_SUCCESS);
}
