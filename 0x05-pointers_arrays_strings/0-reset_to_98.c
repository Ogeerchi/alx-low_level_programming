#include "main.h"
#include <stdio.h>

/**
 * main - update the value of n
 * Return: success 0
 */

int main(void)
{
    int n;
    int *p;

    n = 402;
    p = &n;

    putchar(n);

    *p = 98;

    putchar(n);
    putchar('\n');
    return (0);
}
