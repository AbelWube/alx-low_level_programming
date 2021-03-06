#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies string pointed by src
 * @dest: parameter
 * @src: parameter
 * Auth: Abel Wube
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
