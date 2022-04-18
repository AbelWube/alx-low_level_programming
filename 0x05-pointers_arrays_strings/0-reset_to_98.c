#include <stdio.h>
/**
 * reset_to_98 - updates the value it points to
 * @n: parameter
 * Auth: Abel Wube
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	
	int *p = &n;

	*p = 98;
	return;
}
