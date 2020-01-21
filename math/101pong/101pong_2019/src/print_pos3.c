/*
** EPITECH PROJECT, 2019
** print_vector
** File description:
** displays the vector x, y, z
*/

#include "pong.h"
#include <stdio.h>

void print_pos(pos3 pos)
{
    printf("(%.2f, %.2f, %.2f)\n", pos.x, pos.y, pos.z);
}
