#include "main.h"
/**
 * print_sign - function to check integer sign
 *
 * @n - checks if 'n' is positive, zero, or negative
 *
 * Return: returns 1 if 'n' is greater than zero
 * 	   returns 0 if 'n' is zero
 * 	   returns -1 if 'n' is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43+0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48+0);
		return (0);
	}
	else 
	{
		_putchar(45+0);
		return (-1);
	}

}

