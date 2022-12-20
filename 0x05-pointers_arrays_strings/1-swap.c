#include "main.h"
#include <stdio.h>

/**
 * swap_int - code
 * @a: first integer
 * @b: second integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
