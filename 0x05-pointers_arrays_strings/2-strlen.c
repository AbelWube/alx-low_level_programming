#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns length of string
 * @s: parameter
 * Auth: Abel Wube
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
