/*
** EPITECH PROJECT, 2019
** pos_to_vector
** File description:
** takes two positions and returns a vector
*/

#include "pong.h"

/*Note that the initial point here is A*/
vector3 pos_to_vector(pos3 A, pos3 B)
{
    vector3 result;

    result.x = B.x - A.x;
    result.y = B.y - A.y;
    result.z = B.z - A.z;
    return (result);
}
