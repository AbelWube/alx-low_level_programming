#include <stdio.h>
#include "main.h"
/**
 * print_array - prints array
 * @a: parameter
 * @n: parameter
 * Auth: Abel Wube
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
