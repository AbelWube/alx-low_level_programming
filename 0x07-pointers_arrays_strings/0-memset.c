#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_memset - fill memory with constant byte
 *@s: memory area
 *@c: the constant byte
 *@n: bytes of memory area
 *Auth: Abel Wube
 *Return: pointer to s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
