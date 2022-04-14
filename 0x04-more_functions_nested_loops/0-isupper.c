#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checkes upper or lower
 * Auth: Abel Wube
 * @c: parameter
 * Returns: 1 and 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}	
