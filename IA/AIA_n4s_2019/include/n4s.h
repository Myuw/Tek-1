/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** project header
*/

#ifndef N4S_H_
#define N4S_H_

typedef struct {
    int value_id;
    int status;
    char *values;
    char *additional_info;
} response_t;

char **my_strtab(char *str, char c);

response_t *get_response(char *response_input);
void responset_destroy(response_t *response);

#endif /* !N4S_H_ */
