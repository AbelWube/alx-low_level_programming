#include <stdio.h>
#include "main.h"
/**
 * puts2 - print a string
 * @str: parameter
 * Auth: Abel Wube
 * Return: Always 0.
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		putchar(str[index]);
	putchar('\n');
}
