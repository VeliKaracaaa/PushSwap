/*
** EPITECH PROJECT, 2019
** tree
** File description:
** part_tree
*/

#include "my.h"

void rrr(int *l_a, int *l_b, int *counter_a, int *counter_b)
{
    my_putstr("rrr");
    rra(l_a, counter_a);
    rrb(l_b, counter_b);
}

void addSpaceInOutput(int counter)
{
    if(counter>0)
        my_putstr(" ");
}

void sc(int *l_a, int *l_b, int *counter_a, int *counter_b)
{
    my_putstr("sc");
    sa(l_a, counter_a);
    sb(l_b, counter_b);
}

void rr(int *l_a, int *l_b, int *counter_a, int *counter_b)
{
    my_putstr("rr");
    ra(l_a, counter_a);
    rb(l_b, counter_b);
}