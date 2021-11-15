/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** perfect_and_odd.c
*/

#include "generator.h"

int normez(char **map, int a)
{
    for (int b = 0; map[a][b + 1] != '\0'; b++)
        if (b > 0 && map[a][b] == 'X' && map[a][b + 1] == '*') {
            map[a][b] = '*';
            return (1);
        }
    return (0);
}

void algo_imperfect(char **map)
{
    for (int a = 0; map[a] != NULL; a++)
        if (normez(map, a) == 1)
            return;
}

void perfect_and_odd(char **map, int x, int y, int perfect)
{
    int random = 0;

    if (y % 2 == 0)
        map[y - 1][x - 1] =  '*';
    if (x % 2 == 0) {
        random = rand() % 2;
        if (random == 0)
            map[y - 2][x - 1] = '*';
        if (random == 1)
            map[y - 1][x - 2] = '*';
    }
    if (perfect == 0)
        algo_imperfect(map);
}
