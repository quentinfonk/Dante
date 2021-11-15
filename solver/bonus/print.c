/*
** EPITECH PROJECT, 2020
** print
** File description:
** print
*/

#include "dante.h"

void print(char **tab)
{
    clear();
    for (int i = 0; tab[i] != NULL; i++) {
        printw(tab[i]);
        printw("\n");
    }
    refresh();
    usleep(50000);
}
