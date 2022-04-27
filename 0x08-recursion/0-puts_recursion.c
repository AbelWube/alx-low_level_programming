#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_puts_recursion - locates character in string
 *@s: the string
 *Auth: Abel Wube
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

