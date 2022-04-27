#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_pow_recursion- power function
 *@y: power
 *@x: to be raised
 *Auth: Abel Wube
 *Return: -1 and power
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
