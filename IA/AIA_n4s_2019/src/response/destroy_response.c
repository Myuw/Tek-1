/*
** EPITECH PROJECT, 2020
** destroy_response.c
** File description:
** destroys a response struct
*/

#include <stdlib.h>
#include "n4s.h"

void responset_destroy(response_t *response)
{
    free(response->values);
    free(response->additional_info);
    free(response);
}
