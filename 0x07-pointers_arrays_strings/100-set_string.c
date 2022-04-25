#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 *set_string - sets the values of a pointer to char
 *@s: pointer
 *@to: The char
 *Auth: Abel Wube
 */
void set_string(char **s, char *to)
{
	*s = to;
}


