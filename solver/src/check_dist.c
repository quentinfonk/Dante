/*
** EPITECH PROJECT, 2020
** check
** File description:
** dist
*/

#include "dante.h"

int check_dist_fin(int x, int y, char **tab)
{
    int ch = 0;
    int v = 0;
    static int a = 0;
    static int c = 0;

    if (a == 0) {
        a = check_lo(tab);
        c = check_la(tab);
    }
    for (; tab[ch] != NULL; ch++);
    if (y < 0 || x < 0 || ch <= y)
        return (0);
    if (y >= a ||x >= c)
        return (0);
    if (tab[y][x] == 'X')
        return (0);
    if (tab[y][x] == 'o')
        v += 5;
    for (; tab[y] != NULL; y++, v++);
    for (; tab[y-1][x] != '\0'; x++, v++);
    return (v*10);
}

int check_dist_dep(int x, int y, char **tab)
{
    int ch = 0;
    int v = 0;
    static int a = 0;
    static int c = 0;

    if (a == 0) {
        a = check_lo(tab);
        c = check_la(tab);
    }
    for (; tab[ch] != NULL; ch++);
    if (ch <= y || y < 0 || x < 0 || y >= a ||x >= c)
        return (0);
    if (tab[y][x] == 'X')
        return (0);
    if (tab[y][x] == 'o')
        v += 5;
    for (; x != 0; v++, x--);
    for (; y != 0; v++, y--);
    return (v);
}

int check_dist(list_t *my_s, int x, int y, char **tab)
{
    int a = 0;

    tab[my_s->y][my_s->x] = 'o';
    my_s->d = check_dist_fin(x+1, y, tab) + check_dist_dep(x+1, y, tab);
    my_s->g = check_dist_fin(x-1, y, tab) + check_dist_dep(x-1, y, tab);
    my_s->h = check_dist_fin(x, y-1, tab) + check_dist_dep(x, y-1, tab);
    my_s->b = check_dist_fin(x, y+1, tab) + check_dist_dep(x, y+1, tab);
    a = check_s(my_s);
    return (a);
}
