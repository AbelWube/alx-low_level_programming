/*
 * File: 2-print_alphabet.c
 * Auth: Abel Wube
 */

#include <stdio.h>

/**
  * main - Prints alphabets in lower case. from a-z
  *
  * Return: Always 0.
  */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
