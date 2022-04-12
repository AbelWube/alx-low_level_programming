#include "main.h"

/**
 * print_sign - checks for sign
 * @n: parameter
 * Auth: Abel Wube
 *
 * Return: 0,1 and -1
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
