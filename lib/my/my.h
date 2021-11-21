/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** task 02
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

void sa(int* array, int *counter);
void sb(int* array, int *counter);
void sc(int *l_a, int *l_b, int *counter_a, int *counter_b);
void pa(int *l_a, int *l_b, int *counter_a, int *counter_b);
void pb(int *l_a, int *l_b, int *counter_a, int *counter_b);
void ra(int *l_a, int *counter_a);
void rb(int *l_b, int *counter_b);
void rr(int *l_a, int *l_b, int *counter_a, int *counter_b);
void rra(int *l_a, int *counter_a);
void rrb(int *l_b, int *counter_b);
void rrr(int *l_a, int *l_b, int *counter_a, int *counter_b);
void addSpaceInOutput(int counter);
void p_e(int *l_a, int *l_b, int *c_a, int *c_b,int *p, int *s,int *pr, int *so);
void pus(int *l_a, int *l_b, int *c_a, int *c_b,int *p, int *s,int *pr, int *so);
void s_e(int *l_a, int *l_b, int *c_a, int *c_b,int *push, int *swap, int *sort);
void sw(int *l_a, int *l_b, int *c_a, int *c_b, int *p, int *s, int *pr,int *so);
void do_process(int *l_a, int *l_b, int *c_a, int *c_b);

int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strncpy(char *dest ,char const *src, int n);
int myAtoi(char* str);