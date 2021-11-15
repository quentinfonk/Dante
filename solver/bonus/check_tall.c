/*
** EPITECH PROJECT, 2020
** check
** File description:
** tall
*/

#include "dante.h"

int check_lo(char **tab)
{
    int i = 0;

    for (;tab[i] != NULL; i++);
    return (i);
}

int check_la(char **tab)
{
    int i = 0;

    for (;tab[0][i] != '\0'; i++);
    return (i);
}
