/*
** EPITECH PROJECT, 2019
** my_atoi
** File description:
** task01
*/

#include "my.h"

int number(char *str, int i)
{
    int a = 0;

    for (int j = i; str[j] != '\0'; j++) {
        if (str[j] >= '0' && str[j] <= '9') {
            a = a * 10;
            a = a + str[j] - 48;
            if (str[j + 1] < '0' || str[j + 1] >= '9') {
                j++;
                number(str, j);
                break;
            }
        }
    }
    return (a);
}

int my_atoi(char *av)
{
    int i = 0;
    int z = 0;

    z = number(av, i);
    return (z);
}
