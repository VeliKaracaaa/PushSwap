/*
** EPITECH PROJECT, 2019
** part_one
** File description:
** part_one
*/

#include "my.h"

void sa(int* array, int *counter)
{
    my_putstr("sa");
    if (*counter < 2)
        return;
    int tmp = array[0];
    array[0] = array[1];
    array[1] = tmp;
}

void pa(int *l_a, int *l_b, int *counter_a, int *counter_b)
{
    my_putstr("pa");
    int tmp = l_b[0];
    if (*counter_b == 0)
        return;
    for (int j = *counter_a; j > 0; j--)
        l_a[j] = l_a[j - 1];
    for (int k = 1; k < *counter_b; k++)
        l_b[k - 1] = l_b[k];
    l_a[0] = tmp;
    (*counter_a)++;
    (*counter_b)--;
}

void ra(int *l_a, int *counter_a)
{
    my_putstr("ra");
    int tmp = l_a[0];

    for (int k = 1; k < *counter_a; k++)
        l_a[k] = l_a[k - 1];

    l_a[*counter_a - 1] = tmp;
}

void rra(int *l_a, int *counter_a)
{
    my_putstr("rra");
    int tmp = l_a[*counter_a - 1];

    for (int k = *counter_a - 1; k > 0; k--)
        l_a[k] = l_a[k - 1];

    l_a[*counter_a - 1] = tmp;
}

