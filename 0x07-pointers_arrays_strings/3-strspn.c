#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strspn - gets the length of a prefix substring
 *@s: initial segement
 *@accept: bytes whre they are taken from
 *Auth: Abel Wube
 *Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
