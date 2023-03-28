#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: string
 *
 * Return: Always 0.
 *
 */
void rev_string(char *s)
{
	char *begin_ptr = s;
	char *end_ptr = s + strlen(s) - 1;

	while (end_ptr > begin_ptr)
	{
		char temp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = temp;
		end_ptr--;
		begin_ptr++;
	}
}
