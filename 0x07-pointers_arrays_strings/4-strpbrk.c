#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strpbrk - searches a string
 *@s: string
 *@accept: where searched from
 *Auth: Abel Wube
 *Return: pointer to bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
