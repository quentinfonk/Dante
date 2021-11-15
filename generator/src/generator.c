/*
** EPITECH PROJECT, 2020
** CPE_danet_2019
** File description:
** generator.c
*/

#include <stdio.h>
#include "generator.h"

int rand_value(char **map, direct_t *dir, stack_t **stack, vector_t input)
{
    vector_t v = peek(*stack);
    int rand = 0;

    if (v.x >= 2 && map[v.y][v.x - 2] && map[v.y][v.x - 2] == 'X') {
        rand++;
        dir->left = rand;
    }
    if (v.y >= 2 && map[v.y - 2][v.x] && map[v.y - 2][v.x] == 'X') {
        rand++;
        dir->up = rand;
    }
    if (v.y <= input.y - 3 && map[v.y + 2][v.x] && map[v.y + 2][v.x] == 'X') {
        rand++;
        dir->down = rand;
    }
    if (v.x <= input.x - 3 && map[v.y][v.x + 2] && map[v.y][v.x + 2] == 'X') {
        rand++;
        dir->right = rand;
    }
    return (rand);
}

void change_map(char **map, vector_t v, direct_t dir, int direction)
{
    if (dir.up == direction) {
        map[v.y - 2][v.x] = '*';
        map[v.y - 1][v.x] = '*';
    }
    if (dir.down == direction) {
        map[v.y + 2][v.x] = '*';
        map[v.y + 1][v.x] = '*';
    }
    if (dir.left == direction) {
        map[v.y][v.x - 1] = '*';
        map[v.y][v.x - 2] = '*';
    }
    if (dir.right == direction) {
        map[v.y][v.x + 2] = '*';
        map[v.y][v.x + 1] = '*';
    }
}

void add_node(stack_t **stack, direct_t dir, int direction, vector_t v)
{
    if (dir.up == direction) {
        push(stack, (vector_t){v.x, v.y - 2});
    }
    if (dir.down == direction) {
        push(stack, (vector_t){v.x, v.y + 2});
    }
    if (dir.left == direction) {
        push(stack, (vector_t){v.x - 2, v.y});
    }
    if (dir.right == direction) {
        push(stack, (vector_t){v.x + 2, v.y});
    }
}

void algo(char **map, stack_t **stack, vector_t input)
{
    direct_t dir = {0, 0, 0, 0};
    int rand_val = rand_value(map, &dir, stack, input);
    int direction = 0;
    vector_t v = peek(*stack);

    if (v.x == input.x - 1 && v.y == input.y - 1) {
        pop(stack);
        return;
    }
    if (rand_val != 0) {
        direction = (rand() % rand_val) + 1;
        change_map(map, v, dir, direction);
        add_node(stack, dir, direction, v);
    } else
        pop(stack);
}

int generator(int x, int y, int perfect)
{
    char **map = create_map(x, y);
    stack_t *stack = new_stack((vector_t){0, 0});
    vector_t vect;
    vector_t input = {x, y};

    if (map == NULL || stack == NULL)
        return (84);
    vect = peek(stack);
    while (vect.x != -1 && vect.y != -1) {
        algo(map, &stack, input);
        vect = peek(stack);
    }
    perfect_and_odd(map, x, y, perfect);
    for (int a = 0; map[a+ 1] != NULL; a++)
        printf("%s\n", map[a]);
    printf("%s", map[y - 1]);
    free_map(map);
    return (0);
}
