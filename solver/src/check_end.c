/*
** EPITECH PROJECT, 2020
** check
** File description:
** end
*/

#include "dante.h"

char end(char **tab, list_t *my_s, list_t *p_start)
{
    tab[0][0] = 'o';
    if (tab[my_s->y+1] == NULL)
        tab[my_s->y][my_s->x+1] = 'o';
    else
        tab[my_s->y+1][my_s->x] = 'o';
    while (my_s != p_start) {
        tab[my_s->y][my_s->x] = 'o';
        my_s = my_s->prev;
    }
    printf("%s", tab[0]);
    for (int i = 1; tab[i] != NULL; i++)
        printf("\n%s", tab[i]);
    exit(0);
}

char **clean_map(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        for (int o = 0; tab[i][o]; o++)
            if (tab[i][o] == 'o')
                tab[i][o] = '*';
    return (tab);
}

void check_map(char **tab)
{
    if (tab[0][0] != '*') {
        printf("no solution found");
        exit(84);
    }
}

int check_end(char **tab, int x, int y)
{
    static int a = 0;

    if (tab[y][x+1] == '\0' && tab[y+1] == NULL) {
        tab = clean_map(tab);
        return (42);
    }
    if (a != 0 && a != 1)
        if (x == 0 && y == 0) {
            printf("no solution found");
            exit(84);
        }
    if (x == 0 && y == 0) {
        if (tab[0][1] == 'X')
            a++;
        if (tab[1][0] == 'X')
            a++;
        a++;
    }
    return (0);
}
