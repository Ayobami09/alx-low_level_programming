#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the times table
 *
 * @n: takes number input
 *
 * return - returns nothing if n is greater than or less than 0
 *
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		 _putchar(' ');
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			printf("%d", i * j);

			if (j < n)
			{
				printf("\t");
			}
		}
	printf("\n");
	}
}
