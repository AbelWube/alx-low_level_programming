#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "Abel ";
	char s2[] = "Wube";
	int l1, l2, n, i;

	n = 2;



	l1 = strlen(s1);
	l2 = strlen(s2);
	
	for (i = 0; i <= l2; i++)
	{
		if (i == n)
		{
			break;
		}
		else
		{
			s1[l1 + i] = s2[i];
		}
	}

	printf("%s\n", s1);
	return (0);
}
