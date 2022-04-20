#include <stdio.h>
#include <string.h>
int main()
{
	char* s = "!notrebloH";
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");

	return (0);
}
