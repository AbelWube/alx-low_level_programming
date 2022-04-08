/*
 * File: 3-print_alphabets.c
 * Auth: Abel Wube
 */

#include <stdio.h>

/**
  * main - Prints alphabets in lower and uppercase
  *
  * Return: Always 0.
  */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
