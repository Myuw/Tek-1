/*
** EPITECH PROJECT, 2019
** main
** File description:
** pushswap
*/

#include "my.h"
#include "pushswap.h"

int main(int ac, char **av)
{
    head_t *list_a = create_list(ac, av);
    link_t *link = NULL;

    if (ac == 2) {
        my_putchar('\n');
        return (MY_EXIT_SUCCESS);
    }
    if (list_a == NULL)
        return (MY_EXIT_FAILURE);
    link = list_a->first;
    while (link->next) {
        if (link->data > link->next->data && link->next != NULL) {
            pushswap(list_a, link);
            break;
        }
        link = link->next;
    }
    my_free(list_a, link);
    my_putchar('\n');
    return (MY_EXIT_SUCCESS);
}
