#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Auth: Abel Wube
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar((i % 10) + '0');
	_putchar('\n');
}
