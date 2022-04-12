#include "main.h"

/**
 * _islower - checks for case
 * @ch: takes char
 *
 * Return: 0 and 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
