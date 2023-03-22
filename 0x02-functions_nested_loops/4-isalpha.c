#include "main.h"
/**
 * _isalpha - function to check if character is a letter
 *
 * @c: checks input of function
 *
 * Retun: returns 1 if 'c' is a letter
 * 	otherwise always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
