#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strlen_recursion - locates character in string
 *@s: the string
 *Auth: Abel Wube
 *Return: length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
