/*
** EPITECH PROJECT, 2019
** pushwap
** File description:
** first_methode
*/

#include "my.h"

int main(int ac, char **av)
{
    int *counter_a;
    int *counter_b;
    int val_a = ac - 1;
    int val_b = 0;
    int isSorted = 1;
    counter_a = &val_a;
    counter_b = &val_b;
    int *l_a = malloc(sizeof(int) * 150000);
    int *l_b = malloc(sizeof(int) * 150000);

    for (int j = 1; j < ac; j++)
        l_a[j-1] = my_getnbr(av[j]);
    for (int k = 0; k < *counter_a - 1; k++) {
        if(l_a[k] > l_a[k + 1])
            isSorted = 0;
    }
    if(isSorted == 0)
        do_process(l_a,l_b, counter_a, counter_b);
    my_putstr("\n");
    free (l_a);
    free (l_b);
}