/*
 * File: 4-print_alphabet.c
 * Auth: Abel Wube
 */

#include <stdio.h>

/**
 * main - Prints lowercases without e and q
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}

	putchar('\n');

	return (0);
}

