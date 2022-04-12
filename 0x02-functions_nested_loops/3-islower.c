#include "main.h"

/**
 * _islower - checks for case
 * @ch: takes char
 *
 * Return: 0 and 1
 */

int _islower(int ch)
{
	char ch;

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
