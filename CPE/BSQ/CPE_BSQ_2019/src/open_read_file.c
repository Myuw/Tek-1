/*
** EPITECH PROJECT, 2019
** open_read_file
** File description:
** bsq
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "bsq.h"
#include "my.h"

int open_read_file(char **av)
{
    int fd = 0;
    int count = 0;
    int size = 0;
    char *buffer = NULL;
    char *filepath = av[1];
    struct stat st;

    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (84);
    stat(filepath, &st);
    size = st.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    count = read(fd, buffer, size);
    if (count <= 0)
        return (84);
    buffer[count] = '\0';
    close(fd);
    nb_line_column(buffer);
    return (0);
}
