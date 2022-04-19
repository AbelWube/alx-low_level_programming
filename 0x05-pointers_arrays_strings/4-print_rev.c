#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - reverses a sentence
 * @s: parameter that takes the sentence
 * Auth: Abel Wube
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}

