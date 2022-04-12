#include "main.h"

/**
 * print_alphabet - prints lowercase letters
 * main - Entry point
 * Auth: Abel Wube
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

