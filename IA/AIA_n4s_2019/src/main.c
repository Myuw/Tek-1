/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include <stdlib.h>
#include <stdio.h>
#include "strd.h"
#include "n4s.h"

static response_t *execute(char *payload)
{
    response_t *result = NULL;
    char *line = NULL;
    size_t n = 0;

    my_putstr(payload);
    if (getline(&line, &n, stdin) == -1) {
        free(line);
        return (NULL);
    }
    result = get_response(line);
    if (!result) {
        free(line);
        return (NULL);
    }
    free(line);
    return (result);
}

static float get_speed(float center)
{
    return (center >= 5 ? 1.0 : center >= 3.75 ? 0.8 :
    center >= 1 ? 0.5 : 0.3);
}

static float get_dir(float center, float left, float right)
{
    int sign = (left - right < 0 ? -1 : 1);
    return (center >= 7 ? 0.005 * sign : center >= 5.2 ? 0.05 * sign :
    center >= 3.4 ? 0.1 * sign : center >= 2.19 ? 0.2 * sign :
    center >= 1.05 ? 0.3 * sign : 0.5 * sign);
}

static void react(response_t *lidar_infos)
{
    char **infos = my_strtab(lidar_infos->values, ':');
    char response[100];
    int weights[] = {200};
    float left_dist = atoi(infos[0]);
    float central_dist = atoi(infos[15]);
    float right_dist = atoi(infos[31]);

    if (central_dist <= weights[0])
        execute("car_forward:0.0\n");
    sprintf(response, "car_forward:%f\n", get_speed(central_dist / 400));
    execute(response);
    sprintf(response, "wheels_dir:%f\n",
    get_dir(central_dist / 200, left_dist, right_dist));
    execute(response);
}

int main(void)
{
    response_t *start = execute("start_simulation\n");
    response_t *forward = execute("car_forward:0.5\n");
    response_t *lidar_infos = NULL;

    responset_destroy(forward);
    responset_destroy(start);
    while (1) {
        lidar_infos = execute("get_info_lidar\n");
        react(lidar_infos);
        responset_destroy(lidar_infos);
    }
    return (SUCCESS);
}
