#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checkes upper or lower
 * Auth: Abel Wube
 * @c: parameter
 * Returns: 1 and 0
 */
int _isdigit(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}	
