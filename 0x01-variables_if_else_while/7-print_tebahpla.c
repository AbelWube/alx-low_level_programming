/*
 * File 7-print_tebahpla.c
 * Auth: Abel Wube
 */

#include <stdio.h>

/**
  * main - prints alphabets in reverse order
  *
  * Return: Always 0.
  */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
