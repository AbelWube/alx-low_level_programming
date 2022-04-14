#include <stdio.h>
#include "main.h"

/**
  * _isdigit - checkes for digits
  * @c: parameter
  * Auth: Abel Wube
  * Return: 1 and 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
