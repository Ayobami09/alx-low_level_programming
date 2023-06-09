#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to to the buffer
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

