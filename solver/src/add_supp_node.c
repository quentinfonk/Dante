/*
** EPITECH PROJECT, 2020
** add
** File description:
** supp
*/

#include "dante.h"

void add_d(list_t **my_s, list_t *p_start, char **tab)
{
    if (tab[(*my_s)->y][(*my_s)->x+1] == 'o') {
        supp_nod(p_start, my_s);
    } else {
        add_node((*my_s), p_start, (*my_s)->x+1, (*my_s)->y);
        (*my_s) = (*my_s)->next;
    }
}

void add_h(list_t **my_s, list_t *p_start, char **tab)
{
    if (tab[(*my_s)->y-1][(*my_s)->x] == 'o') {
        supp_nod(p_start, my_s);
    } else {
        add_node((*my_s), p_start, (*my_s)->x, (*my_s)->y-1);
        (*my_s) = (*my_s)->next;
    }
}

void add_g(list_t **my_s, list_t *p_start, char **tab)
{
    if (tab[(*my_s)->y][(*my_s)->x-1] == 'o') {
        supp_nod(p_start, my_s);
    } else {
        add_node((*my_s), p_start, (*my_s)->x-1, (*my_s)->y);
        (*my_s) = (*my_s)->next;
    }
}

void add_b(list_t **my_s, list_t *p_start, char **tab)
{
    if (tab[(*my_s)->y+1][(*my_s)->x] == 'o') {
        supp_nod(p_start, my_s);
    } else {
        add_node((*my_s), p_start, (*my_s)->x, (*my_s)->y+1);
        (*my_s) = (*my_s)->next;
    }
}
