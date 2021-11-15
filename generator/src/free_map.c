/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** free_map.c
*/

#include "generator.h"

void free_map(char **map)
{
    for (int a = 0; map[a] != NULL; a++)
        free(map[a]);
    free(map);
}
