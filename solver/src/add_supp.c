/*
** EPITECH PROJECT, 2020
** add
** File description:
** supp
*/

#include "dante.h"

void add_node(list_t *my_s, list_t *p_start, int x, int y)
{
    list_t *node = malloc(sizeof(list_t));

    if (node == NULL)
        exit(84);
    my_s->next = node;
    node->prev = my_s;
    node->x = x;
    node->y = y;
    node->pas = 0;
    node->next = p_start;
    p_start->prev = node;
}

void supp_nod(list_t *p_start, list_t **my_s)
{
    list_t *rm = (*my_s);

    (*my_s) = (*my_s)->prev;
    (*my_s)->next = p_start;
    p_start->prev = (*my_s);
    free(rm);
}
