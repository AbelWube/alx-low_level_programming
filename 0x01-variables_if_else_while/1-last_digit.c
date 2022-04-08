/*
   * File: 1-last_digit.c
   * Auth: Abel Wube
   */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
  * main - Generates a random number and identifies whether
  *	the last digit is greater than five, equals to zero
  *	and less than six.
  *
  * Return: Always 0.
  */

int main(void)
{
	int n;
	int m = (n % 10);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		printf("Last digit of %d is %d and is 0\n", n, m);
	return (0);
}
