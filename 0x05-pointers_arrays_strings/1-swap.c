#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps values of a and b
 * @a: parameter
 * @b: parameter
 * Auth: Abel Wube
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
