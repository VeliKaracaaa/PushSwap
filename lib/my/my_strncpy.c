/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** task 02
*/

#include "my.h"

char *my_strncpy(char *dest ,char const *src, int n)
{
    int i = 0;

    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    if (i > n)
      dest[i] = '\0';
    return (dest);
}
