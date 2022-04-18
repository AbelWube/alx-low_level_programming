#include <stdio.h>
#include "main.h"
/**
 * _puts - print a string
 * @str: parameter
 * Auth: Abel Wube
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

