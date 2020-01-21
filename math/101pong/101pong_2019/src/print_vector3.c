/*
** EPITECH PROJECT, 2019
** print_vector
** File description:
** displays the vector x, y, z
*/

#include "pong.h"
#include <stdio.h>

void print_vector(vector3 vector)
{
    printf("(%.2f, %.2f, %.2f)\n", vector.x, vector.y, vector.z);
}
