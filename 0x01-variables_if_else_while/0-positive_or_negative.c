#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	If (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else if (n < 0)
	{
		printf("%d is negative\n", n)
	}

	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
