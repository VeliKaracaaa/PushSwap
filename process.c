/*
** EPITECH PROJECT, 2019
** process
** File description:
** process
*/

#include "my.h"

void p_e(int *l_a, int *l_b, int *c_a, int *c_b,int *p, int *s,int *pr, int *so)
{
    if (*pr == 1) {
        rra(l_a, c_a);
        addSpaceInOutput(*c_a);
        *p = 1;
        *s = 1;
        *pr = 0;
        *so = 0;
    }
    else {
        ra(l_a, c_a);
        addSpaceInOutput(*c_a);
        *p = 1;
        *pr = 1;
        *so = 0;
    }
}

void pus(int *l_a, int *l_b, int *c_a, int *c_b,int *p, int *s,int *pr, int *so)
{
        if (*c_a > 1 && l_a[0] > l_a[1]) {
            sa(l_a, c_a);
            addSpaceInOutput(*c_a);
            *p = 1;
            *so = 0;
        }
        else if ((*c_a > 1 && l_a[0] < l_a[1])
                || (*c_a > 1 && l_a[0] == l_a[1]))
        {
            pb(l_a,l_b, c_a, c_b);
            addSpaceInOutput(*c_a);
            *p = 1;
            *so = 0;
        }
        else {
            p_e(l_a,l_b, c_a, c_b, p, s, pr, so);
        }
}

void s_e(int *l_a, int *l_b, int *c_a, int *c_b,int *push, int *swap, int *sort)
{
    for (int i = 0; i < (*c_a)-1; i++) {
        if(l_a[i] > l_a[i+1])
        {
            addSpaceInOutput(1);
            *push = 0;
            *swap = 0;
            *sort = 0;
            break;
        }
    }
}

void sw(int *l_a, int *l_b, int *c_a, int *c_b, int *p, int *s, int *pr,int *so)
{
    if (*c_b > 1 && l_b[0] < l_b[1]) {
        sb(l_b,c_b);
        addSpaceInOutput(*c_b);
        *p = 1;
        *s = 1;
        *so = 0;
    }
    else if ((*c_b > 1 && l_b[0] > l_b[1])
            || (*c_b > 1 && l_b[0] == l_b[1])
            ||  *c_b==1)
    {
        pa(l_a, l_b, c_a, c_b);
        addSpaceInOutput(*c_b);
        *p = 1;
        *s = 1;
        *so = 0;
    }
    else {
        s_e(l_a,l_b, c_a, c_b, p, s, so);
    }
}

void do_process(int *l_a, int *l_b, int *c_a, int *c_b)
{
    int push = 0;
    int swap = 0;
    int p_ra = 0;
    int is_sorted;

    do {
        is_sorted = 1;
        if (swap == 0) {
            pus(l_a,l_b, c_a, c_b, &push, &swap, &p_ra, &is_sorted);
        }
        else if (push == 1) {
            sw(l_a,l_b, c_a, c_b, &push, &swap, &p_ra, &is_sorted);
        }
    } while (is_sorted == 0);
}