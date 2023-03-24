#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of times the character should be printed
 *
 * return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
