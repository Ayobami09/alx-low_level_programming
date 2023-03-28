#include "main.h"

/**
 * puts2 - prints other character of a string
 *
 * @str: string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;

	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
