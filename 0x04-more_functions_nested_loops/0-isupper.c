#include <stdio.h>
#include "main.h"

/**
 * _isupper - checkes upper or lower
 * @c: parameter
 * Auth: Abel Wube
 * Return: 1 and 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
