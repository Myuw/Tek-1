/*
** EPITECH PROJECT, 2020
** get_tetriminos_path
** File description:
** tetris
*/

#include "my.h"
#include "tetris.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

char *open_tetriminos(char *path)
{
    int fd = 0;
    int count = 0;
    int size = 0;
    char *buffer = NULL;
    struct stat st;

    fd = open(path, O_RDONLY);
    if (fd == -1)
        return (NULL);
    stat(path, &st);
    size = st.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    count = read(fd, buffer, size);
    if (count <= 0)
        return (NULL);
    buffer[count] = '\0';
    close(fd);
    return (buffer);
}

void puterror_tetrimino(char const *str)
{
    int i = 0;

    while (str[i] != '.')
        i++;
    write(2, str, i);
}

void error_tetrimino(char *tetrimino_name)
{
    my_puterror("Tetriminos : Name ");
    puterror_tetrimino(tetrimino_name);
    my_puterror(" : Error\n");
}

void get_tetriminos_path(input_t *input, char *tetrimino_name)
{
    (void)long_options;
    char *path = my_strcat("tetriminos/", tetrimino_name);
    char *tetrimino = NULL;

    tetrimino = open_tetriminos(path);
    if (tetrimino == NULL || check_tetrimino(tetrimino) == -1) {
        error_tetrimino(tetrimino_name);
        return ;
    }
    free(path);
    parse_tetrimino(input, tetrimino, tetrimino_name);
}