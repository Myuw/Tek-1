/*
** EPITECH PROJECT, 2019
** vector3_operators
** File description:
** A grouping of vector3 operation functions
*/

#include <pong.h>

vector3 add_vector(vector3 a, vector3 b)
{
    vector3 result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return (result);
}

vector3 sub_vector(vector3 a, vector3 b)
{
    vector3 result;

    result.x = a.x + (b.x * -1);
    result.y = a.y + (b.y * -1);
    result.z = a.z + (b.z * -1);
    return (result);
}

vector3 mult_vector(vector3 a, float nb)
{
    vector3 result;

    result.x = nb*a.x;
    result.y = nb*a.y;
    result.z = nb*a.z;
    return (result);
}

float get_vector_norm(vector3 vector)
{
    float result;

    result = sqrt(pow(vector.x, 2) + pow(vector.y, 2) + pow(vector.z, 2));
    return (result);
}
