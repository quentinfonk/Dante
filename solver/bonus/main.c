/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <curses.h>
#include "dante.h"

int check_s(list_t *my_s)
{
    int *tab = malloc(sizeof(int) * 5);
    int a = 0;

    tab[0] = my_s->d;
    tab[1] = my_s->g;
    tab[2] = my_s->h;
    tab[3] = my_s->b;
    tab = bubbleSort(tab, 4);
    for (; tab[a] == 0; a++);
    return (tab[a]);
}

int alg(char **tab, list_t *my_s, list_t *p_start)
{
    for (int x = 0, y = 0, a = 0, v = 0; 1 == 1; x = my_s->x, y = my_s->y) {
        a = check_dist(my_s, x, y, tab);
        v = 0;
        if (a == my_s->d) {
            add_d(&my_s, p_start, tab);
            v = 1;
        } if (a == my_s->h && v == 0) {
            add_h(&my_s, p_start, tab);
            v = 1;
        } if (a == my_s->g && v == 0) {
            add_g(&my_s, p_start, tab);
            v = 1;
        } if (a == my_s->b && v == 0) {
            add_b(&my_s, p_start, tab);
            v = 1;
        }
        if (check_end(tab, x, y) == 42)
            end(tab, my_s, p_start);
        print(tab);
    }
    return (0);
}

void ope(void)
{
    initscr();
    noecho();
    curs_set(0);
    return;
}

int dant(char *buffer)
{
    char **tab;
    list_t *my_s = malloc(sizeof(list_t));
    list_t *p_start;

    tab = my_str_to_word_array(buffer);
    my_s->next = my_s;
    my_s->prev = my_s;
    p_start = my_s;
    my_s->x = 0;
    my_s->y = 0;
    check_map(tab);
    ope();
    alg(tab, my_s, p_start);
    return (0);
}

int main(int ac, char **av)
{
    struct stat sb;
    char *buffer;
    int o = 0;
    int fd;

    if (ac != 2)
        return (84);
    fd = open(av[1], O_RDONLY);
    stat(av[1], &sb);
    o = sb.st_size;
    buffer = malloc(sizeof(char) * (o + 1));
    if (buffer == NULL)
        return (84);
    read(fd, buffer, o);
    if (buffer[0] == '\0')
        return (84);
    close(fd);
    dant(buffer);
    return (0);
}
