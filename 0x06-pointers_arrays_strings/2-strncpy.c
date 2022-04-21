#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strncpy - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: Truncation value
 *Auth: Abel Wube
 *Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
