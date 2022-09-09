#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char w;

	for (w = 'z'; w >= 'a'; w--)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
