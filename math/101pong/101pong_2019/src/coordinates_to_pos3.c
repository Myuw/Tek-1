/*
** EPITECH PROJECT, 2019
** coordinates_to_pos3
** File description:
** takes coordinates and makes a pos3 struct
*/

#include <pong.h>

pos3 coordinates_to_pos(float x, float y, float z)
{
    pos3 result;

    result.x = x;
    result.y = y;
    result.z = z;
    return (result);
}
