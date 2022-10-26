#include "main.h"
#include <stdio.h>

/**
 * main - update the value of n
 * Return: success 0
 */

void reset_to_98(int *n)
{
    int x;
    int *p;

    x = 402;
    *p = &n;

    putchar(x);

    *p = 98;

    putchar(x);
    putchar('\n');
    
}
