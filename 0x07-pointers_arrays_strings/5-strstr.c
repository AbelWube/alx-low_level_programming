#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strstr - locates a substring
 *@haystack: string to be searched from
 *@needle: string to be searched
 *Auth: Abel Wube
 *Return: pointer to string to be located
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
