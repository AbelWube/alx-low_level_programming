#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strcat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *Auth: Abel Wube
 *Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int l1, l2, i;

	l1 = strlen(dest);
	l2 = strlen(src);

	for (i = 0; i <= l2; i++)
		dest[l1 + i] = src[i];
	return (dest);
}
