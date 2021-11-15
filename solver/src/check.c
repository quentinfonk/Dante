/*
** EPITECH PROJECT, 2020
** check
** File description:
** check
*/

#include "dante.h"

int check_0(list_t *my_s, char **tab)
{
    if (tab[my_s->y-1][my_s->x] == 'o') {
        if (tab[my_s->y-1][my_s->x] == '*')
            return (0);
        if (tab[my_s->y][my_s->x-1] == '*')
            return (0);
        if (tab[my_s->y+1][my_s->x] == '*')
            return (0);
    }
    return (1);
}

int check_1(list_t *my_s, char **tab)
{
    if (tab[my_s->y-1][my_s->x] == 'o') {
        if (tab[my_s->y][my_s->x+1] == '*')
            return (0);
        if (tab[my_s->y][my_s->x-1] == '*')
            return (0);
        if (tab[my_s->y+1][my_s->x] == '*')
            return (0);
    }
    return (1);
}

int check_2(list_t *my_s, char **tab)
{
    if (tab[my_s->y-1][my_s->x] == 'o') {
        if (tab[my_s->y][my_s->x+1] == '*')
            return (0);
        if (tab[my_s->y-1][my_s->x] == '*')
            return (0);
        if (tab[my_s->y+1][my_s->x] == '*')
            return (0);
    }
    return (1);
}

int check_3(list_t *my_s, char **tab)
{
    if (tab[my_s->y-1][my_s->x] == 'o') {
        if (tab[my_s->y][my_s->x+1] == '*')
            return (0);
        if (tab[my_s->y][my_s->x-1] == '*')
            return (0);
        if (tab[my_s->y-1][my_s->x] == '*')
            return (0);
    }
    return (1);
}
