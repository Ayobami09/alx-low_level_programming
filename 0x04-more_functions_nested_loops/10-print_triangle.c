#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * return: 0
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int i;
	int j;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			_putchar('#);
		}
		_putchar('\n');
	}
}
