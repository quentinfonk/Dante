/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** allocates a memory and cp the string given
*/

#include "dante.h"

char *my_strdup(char const *src)
{
    int i = 0;
    int size = my_strlen(src);
    char *new_src = malloc((size + 1) * sizeof(char));

    if (new_src == NULL)
        return (NULL);
    for (i = 0; src[i] != '\0'; i++)
        new_src[i] = src[i];
    new_src[i + 1] = '\0';
    return (new_src);
}
