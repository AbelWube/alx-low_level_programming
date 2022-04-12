#include "main.h"

/**
 * print_alphabet_x10 - prints lower case 10 times
 * main - entry point
 *
 * Returns: 0
 */

int print_alphabet_x10(void)
{
	int j = 0;

	while (j <= 9)
	{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
		j++;
	}
	return (0);
}
