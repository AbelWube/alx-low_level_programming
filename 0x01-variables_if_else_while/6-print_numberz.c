/*
 * File 6-print_numberz.c
 * Auth: Abel Wube
 */

#include <stdio.h>

/**
 * main - Prints base 10 using putchar
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');

	return (0);
}

