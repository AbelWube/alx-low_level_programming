#include "main.h"

/**
 * print_alphabet_x10 - prints lower case 10 times
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int j = 0;
	char i;

	while (j <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	j++;
	_putchar('\n');
	}
}
