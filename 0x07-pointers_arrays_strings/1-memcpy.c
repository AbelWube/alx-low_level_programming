#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_memcpy - copies memory area
 *@dest: the first memory area
 *@src: the second memory area
 *@n: n bytes of area
 *Auth: Abel Wube
 *Return: pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
