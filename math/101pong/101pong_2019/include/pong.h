/*
** EPITECH PROJECT, 2019
** pong
** File description:
** header file for 101pong project
*/

#ifndef PONG_H_
#define PONG_H_

#include <math.h>
#include "my.h"
#include <stdlib.h>

typedef struct vector3_ {
    float x;
    float y;
    float z;
} vector3;

typedef struct pos3_ {
    float x;
    float y;
    float z;
} pos3;

int is_time_neg(int t);
int is_time_not_f(double t);
void print_vector(vector3 vector);
void print_pos(pos3 pos);
pos3 coordinates_to_pos(float x, float y, float z);
vector3 pos_to_vector(pos3 A, pos3 B);
vector3 add_vector(vector3 a, vector3 b);
vector3 sub_vector(vector3 a, vector3 b);
vector3 mult_vector(vector3 a, float nb);
vector3 pos_to_vector(pos3 A, pos3 B);
float get_vector_norm(vector3 vector);

#endif
