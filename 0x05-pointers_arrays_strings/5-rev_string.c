#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: parameter
 * Auth: Abel Wube
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}

