#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: constant byte used to replace
 * @n: number of bytes to replace
 * Description: fills memory with byte b for n byte
 * Return: pointer to memery
 **/

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}

	return (s);
}
