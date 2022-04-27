#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *factorial- locates character in string
 *@n: the number
 *Auth: Abel Wube
 *Return: -1 and factorial
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
