/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** header
*/

#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#define MY_EXIT_SUCCESS 0
#define MY_EXIT_FAILURE 84

#define MIN(a, b) ((a < b) ? a : b)
#define MAX(a, b) ((a > b) ? a : b)


typedef struct link_s
{
    int data;
    struct link_s *prev;
    struct link_s *next;
} link_t;

typedef struct head_s
{
    link_t *first;
    link_t *last;
    int len;
} head_t;

link_t *create_new_link(int i);

head_t *create_list(int ac, char **av);

void pushswap(head_t *list_a, link_t *link);

void my_ra(head_t *head, link_t *link);

void my_sa(head_t *head, link_t *link);

void my_rra(head_t *head, link_t *link);

int check_list(head_t *head_a, link_t *link);

void bubble_sort(head_t *list_a);

void my_free(head_t *list, link_t *link);

#endif
