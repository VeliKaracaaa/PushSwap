/*
** EPITECH PROJECT, 2019
** part_two
** File description:
** part_two
*/

#include "my.h"

void rb(int *l_b, int *counter_b)
{
    my_putstr("rb");
    int tmp = l_b[0];

    for (int k = 1; k < *counter_b; k++)
        l_b[k] = l_b[k - 1];

    l_b[*counter_b - 1] = tmp;
}

void rrb(int *l_b, int *counter_b)
{
    my_putstr("rrb");
    int tmp = l_b[*counter_b - 1];

    for (int k = *counter_b - 1; k > 0; k--)
        l_b[k] = l_b[k - 1];

    l_b[*counter_b - 1] = tmp;
}

void sb(int* array, int *counter)
{
    my_putstr("sb");
    if (*counter < 2)
        return;
    int tmp = array[0];
    array[0] = array[1];
    array[1] = tmp;
}

void pb(int *l_a, int *l_b, int *counter_a, int *counter_b)
{
    my_putstr("pb");
    int tmp = l_a[0];
    if (*counter_a == 0)
        return;

    for (int j = *counter_b; j > 0; j--)
        l_b[j] = l_b[j - 1];
    for (int k = 1; k < *counter_a; k++)
        l_a[k - 1] = l_a[k];
    l_b[0] = tmp;

    (*counter_b)++;
    (*counter_a)--;
}
