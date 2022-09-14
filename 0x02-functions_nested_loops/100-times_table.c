#include "main.h"

/**
 * print_times_table - Prints the time table of the input,
 * starting with 0
 * @n: The value of the times table to be printed.
 */
void print_times_tables(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar ('0');




			if (prod <= 99)
			if (prod <= 9)
			if (prod >= 100)
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10)) % 10 + '0');
			}


			_putchar((prod / 10) + '0');
		}

	}
	_putchar('\n');
}
}
