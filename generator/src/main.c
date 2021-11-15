/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main.c
*/

#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "generator.h"

int main(int ac, char **av)
{
    int x = 0;
    int y = 0;

    srand(time(NULL));
    if (ac != 3 && ac != 4)
        return (84);
    if (my_isnum(av[1]) == 84 || my_isnum(av[2]) == 84)
        return (84);
    x = atoi(av[1]);
    y = atoi(av[2]);
    if (ac == 4) {
        if (strcmp(av[3], "perfect") == 0)
            return (generator(x, y, 1));
        else
            return (84);
    }
    else
        return (generator(x, y, 0));
    return (0);
}
