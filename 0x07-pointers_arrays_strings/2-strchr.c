#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strchr - locates character in string
 *@s: the string
 *@c: character
 *Auth: Abel Wube
 *Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
