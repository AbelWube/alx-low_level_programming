#include <stdio.h>
#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: Truncation value
 *Auth: Abel Wube
 *Return: pointer to dest
 */
char *_strcat(char *dest, char *src, int n)
{
	char dest;
	char src;
	int l1, l2, i, n;

	l1 = strlen(dest);
	l2 = strlen(src);

	for (i = 0; i <= l2; i++)
	{
		if (i == n)
		{
			break;
		}
		else
		{
			dest[l1 + i] = src[i];
		}
	}
	return (*dest);
}
