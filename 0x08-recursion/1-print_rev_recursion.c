#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is appropriately.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
