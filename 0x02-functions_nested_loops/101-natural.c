#include "main.h"
#include <stdio.h>
/**
 * main - write a program that prints the sum of multiples of 3 or 5 below 1024
 *
 * Return: return on success 0
 *
 */

int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
