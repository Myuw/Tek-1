/*
** EPITECH PROJECT, 2019
** 101pong_toolbox.c
** File description:
** toolbox for the 101pong project
*/

int is_time_not_f(double t)
{
    int temp = (int)t;

    if (t == temp)
        return (1);
    return (0);
}

int is_time_neg(int t)
{
    if (t < 0)
        return (1);
    return (0);
}
