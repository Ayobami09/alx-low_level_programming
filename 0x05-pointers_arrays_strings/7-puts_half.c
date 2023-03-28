#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: string
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	while (start_index < length)
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}
