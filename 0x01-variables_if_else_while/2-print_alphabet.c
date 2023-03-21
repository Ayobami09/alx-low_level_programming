#include "holberton.h"

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet
 * using only the putchar function twice.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

