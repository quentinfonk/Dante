/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** stack.c
*/

#include "generator.h"

stack_t *new_stack(vector_t vect)
{
    stack_t *stack = (stack_t *)malloc(sizeof(stack_t));

    if (stack == NULL)
        return (NULL);
    stack->vect = vect;
    stack->next = NULL;
    return (stack);
}

int is_empty(stack_t *stack)
{
    return (!stack);
}

void push(stack_t **stack, vector_t vect)
{
    stack_t *new = new_stack(vect);

    if (new) {
        new->next = *stack;
        *stack = new;
    }
}

vector_t pop(stack_t **stack)
{
    vector_t vect = {-1, -1};
    stack_t *stac;

    if (is_empty(*stack))
        return (vect);
    stac = (*stack);
    *stack = (*stack)->next;
    vect = stac->vect;
    free(stac);
    return (vect);
}

vector_t peek(stack_t *stack)
{
    if (is_empty(stack))
        return ((vector_t){-1, -1});
    return (stack->vect);
}
