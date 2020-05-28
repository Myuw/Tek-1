/*
** EPITECH PROJECT, 2020
** my_map_boat
** File description:
** place boat in map
*/

#include "my.h"
#include "navy.h"

char **my_place_boat(char *boat_coord, char **map, int x, int y)
{
    int i = 0;
    int j = 0;

    for (; map[1][y] != boat_coord[2]; y++);
    for (; map[x][0] != boat_coord[3]; x++);
    for (; map[1][i] != boat_coord[5]; i++);
    for (; map[j][0] != boat_coord[6]; j++);
    if (boat_coord[2] == boat_coord[5])
        for (; x - 1 != j; x++)
            map[x][y] = boat_coord[0];
    else {
        for (; y != i; y++) {
            map[x][y] = boat_coord[0];
            y++;
        }
        map[x][y] = boat_coord[0];
    }
    return (map);
}

char **my_map_boat(char **boat_coord, char **map)
{
    int x = 0;
    int y = 0;

    for (int i = 0; i < 4; i++)
        map = my_place_boat(boat_coord[i], map, x, y);
    return (map);
}