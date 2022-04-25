#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *print_diagsums - prints the sum of diagonals
 *@a: matrix
 *@size: the size of matrix
 *Auth: Abel Wube
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}

