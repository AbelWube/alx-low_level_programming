#include <stdio.h>
#include "main.h"
#include "string.h"

/**
 *_strncat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: Truncation value
 *Auth: Abel Wube
 *Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, l2, i, n = 0;

	l1 = strlen(dest);
	l2 = strlen(src);

	for (i = 0; i <= l2; i++)
	{
		if (i == n)
			break;
		else
			dest[l1 + i] = src[i];
	}
	return (dest);
}
