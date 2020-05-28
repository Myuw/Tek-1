/*
** EPITECH PROJECT, 2020
** my_get_map
** File description:
** my_get_map
*/

#include "my.h"
#include "navy.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int my_number_add(char c, int i, int x)
{
    if (i == 2)
        if (c == '2')
            x++;
    if (i == 3)
        if (c == '3')
            x++;
    if (i == 4)
        if (c == '4')
            x++;
    if (i == 5)
        if (c == '5')
            x++;
    return (x);
}

char **my_check_map(char **map)
{
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;

    for (int i = 3; i < 11; i++)
        for (int j = 2; map[i][j] != '\0'; j++) {
            two = my_number_add(map[i][j], 2, two);
            three = my_number_add(map[i][j], 3, three);
            four = my_number_add(map[i][j], 4, four);
            five = my_number_add(map[i][j], 5, five);
        }
    if (two != 2 || three != 3 || four != 4 || five != 5)
        return (NULL);
    return (map);
}

char *my_get_empty_map(void)
{
    int fd = 0;
    int size = 0;
    char *buffer = malloc(sizeof(char) * (393 + 2));

    if (buffer == NULL)
        return (NULL);
    fd = open("maps/empty_map.txt", O_RDONLY);
    if (fd == -1)
        return (NULL);
    size = read(fd, buffer, 393);
    close(fd);
    if (size <= 0)
        return (NULL);
    for (size = 0; buffer[size] != '\0'; size++);
    buffer[size] = '\n';
    buffer[size + 1] = '\0';
    return (buffer);
}

char **my_create_map(char *buffer)
{
    char *empty_map = my_get_empty_map();
    char **map = NULL;
    char **boat_coord = NULL;

    if (empty_map == NULL)
        return (NULL);
    map = my_strtab(empty_map, '\n');
    boat_coord = my_strtab(buffer, '\n');
    map = my_map_boat(boat_coord, map);
    if (my_check_map(map) == NULL)
        return (NULL);
    free(empty_map);
    free(buffer);
    return (map);
}

char **my_get_map(char *filepath)
{
    int fd = 0;
    int size = 0;
    char *buffer = malloc(sizeof(char) * (31 + 1));
    char **map = NULL;

    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (NULL);
    size = read(fd, buffer, 31);
    if (size <= 0)
        return (NULL);
    close(fd);
    fd = my_check_buffer(buffer);
    if (fd == -1)
        return (NULL);
    map = my_create_map(buffer);
    if (map == NULL)
        return (NULL);
    return (map);
}