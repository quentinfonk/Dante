/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** create_map.c
*/

#include "generator.h"

char **create_map(int x, int y)
{
    char **map = malloc(sizeof(char *) * (y + 1));

    if (map == NULL)
        return (NULL);
    for (int a = 0; a < y; a++) {
        map[a] = malloc(sizeof(char) * (x + 1));
        if (map[a] == NULL)
            return (NULL);
        for (int b = 0; b < x; b++)
            map[a][b] = 'X';
        map[a][x] = '\0';
    }
    map[0][0] = '*';
    map[y] = NULL;
    return (map);
}
