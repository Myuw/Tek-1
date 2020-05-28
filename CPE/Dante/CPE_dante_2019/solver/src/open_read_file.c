/*
** EPITECH PROJECT, 2020
** open_read_file
** File description:
** dante
*/

#include "solver.h"
#include <sys/stat.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int open_read_file(char *filepath)
{
    int fd = 0;
    int size = 0;
    int count = 0;
    struct stat st;
    char *buffer = NULL;

    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (-1);
    stat(filepath, &st);
    size = st.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    count = read(fd, buffer, size);
    if (count <= 0)
        return (-1);
    buffer[count] = '\0';
    close(fd);
    right_wall_follower(buffer);
    return (0);
}