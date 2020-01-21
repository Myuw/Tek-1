/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** hub file for the 101pong project
*/

#include "pong.h"
#include <stdio.h>
#include <math.h>

/*Note: check if n is a float or negative*/
int check_args(int ac, char *av[])
{
    if (ac != 8 || my_strcmp(av[1],"-h") == 0 || is_time_neg(atof(av[7])) == 1\
            || is_time_not_f(atof(av[7])) == 0) {
        my_putstr("USAGE\n\
    ./101pong x0 y0 z0 x1 y1 z1 n\n\n\
DESCRIPTION\n\
    x0 ball abscissa at time t - 1\n\
    y0 ball ordinate at time t - 1\n\
    z0 ball altitude at time t - 1\n\
    x1 ball abscissa at time t\n\
    y1 ball ordinate at time t\n\
    z1 ball altitude at time t\n\
    n  time shift (greater than or equal to zero, integer)\n");
        return (0);
    }
    return (1);
}

pos3 move_ball(pos3 actual, vector3 vector)
{
    pos3 result;

    result.x = actual.x + vector.x;
    result.y = actual.y + vector.y;
    result.z = actual.z + vector.z;
    return (result);
}

void show_results(int t, vector3 velocity, float incidence,\
        pos3 coordinates, int touched)
{
    my_putstr("The velocity vector of the ball is:\n");
    print_vector(velocity);
    my_putstr("At time t + ");
    my_putint(t);
    my_putstr(", ball coordinates will be:\n");
    print_pos(coordinates);
    if (touched) {
        my_putstr("The incidence angle is:\n");
        printf("%.2f degrees\n", incidence);
    } else
        my_putstr("The ball won't reach the paddle.\n");
}

float angle_incidence(vector3 vector)
{
    float angle;
    float norm;

    norm = get_vector_norm(vector);
    if (vector.z < 0)
        vector.z = vector.z * -1;
    angle = asin(vector.z / norm);
    angle = angle * (180/M_PI);
    return (angle);
}

int main(int ac, char *av[])
{
    pos3 A;
    pos3 B;
    pos3 ball;
    vector3 vector;
    int t = 0;
    int touched = 0;
    
    if (check_args(ac, av) == 0)
        return (84);
    A = coordinates_to_pos(atof(av[1]), atof(av[2]), atof(av[3]));
    B = coordinates_to_pos(atof(av[4]), atof(av[5]), atof(av[6]));
    ball = B;
    vector = pos_to_vector(A, B);
    for(; t < atoi(av[7]); t++) {
        ball = move_ball(ball, vector);
        if ((B.z >= 0 && ball.z <= 0) || (B.z <= 0 && ball.z >= 0))
            touched = 1;
    }
    show_results(t, vector, angle_incidence(vector), ball, touched);
    return (0);
}
