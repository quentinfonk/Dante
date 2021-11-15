/*
** EPITECH PROJECT, 2020
** tetris.h
** File description:
** tetris.h
*/

#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef MY_H
#define MY_H

typedef struct list_s {
    int x;
    int y;
    int d;
    int g;
    int h;
    int b;
    int pas;
    struct list_s *next;
    struct list_s *prev;
}list_t;

int check_0(list_t *my_s, char **tab);
int check_1(list_t *my_s, char **tab);
int check_2(list_t *my_s, char **tab);
int check_3(list_t *my_s, char **tab);
int check(list_t *my_s, int a, char **tab, int pos);
int check_dist(list_t *my_s, int x, int y, char **tab);
int check_end(char **tab, int x, int y);
void swap(int *xp, int *yp);
int *bubbleSort(int arr[], int n);
void add_d(list_t **my_s, list_t *p_start, char **tab);
void add_h(list_t **my_s, list_t *p_start, char **tab);
void add_g(list_t **my_s, list_t *p_start, char **tab);
void add_b(list_t **my_s, list_t *p_start, char **tab);
char **my_str_to_word_array(char *str);
int my_strlen(char const *str);
int check_s(list_t *my_s);
int check_dist_fin(int x, int y, char **tab);
int check_dist_dep(int x, int y, char **tab);
void add_node(list_t *my_s, list_t *p_start, int x, int y);
void supp_nod(list_t *p_start, list_t **my_s);
int check_lo(char **tab);
int check_la(char **tab);
char end(char **tab, list_t *my_s, list_t *p_start);
void check_map(char **tab);

#endif
