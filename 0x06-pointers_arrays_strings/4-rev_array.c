#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *reverse_array - reverses array
 *@a: the first array
 *@n: the number of element of the array
 *Auth: Abel Wube
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
