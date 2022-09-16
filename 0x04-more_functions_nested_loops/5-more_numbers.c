#include "main.h"

/**
 * more_numbers - print 0-14 10 times
 * Return: nothing
 **/

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48;
		}
		_putchar('\n');

		i++;
	}
}
