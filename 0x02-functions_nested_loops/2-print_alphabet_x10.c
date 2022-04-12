#include "main.h"

/**
 * print_alphabet_x10 - prints lower case 10 times
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; j < 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	}
}
