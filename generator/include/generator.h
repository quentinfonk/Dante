/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** generator.h
*/

#ifndef GENERATOR_H
#define GENERATOR_H

#include <stddef.h>
#include <stdlib.h>

typedef struct direct_t
{
    int up;
    int down;
    int left;
    int right;
} direct_t;

typedef struct vector_t
{
    int x;
    int y;
} vector_t;


typedef struct stack_t
{
    vector_t vect;
    struct stack_t *next;
} stack_t;

int my_isnum(char *av);
int generator(int x, int y, int perfect);
char **create_map(int x, int y);
stack_t *new_stack(vector_t vect);
void push(stack_t **stack, vector_t vect);
vector_t peek(stack_t *stack);
vector_t pop(stack_t **stack);
void free_map(char **map);
void perfect_and_odd(char **map, int x, int y, int perfect);

#endif
