#include "main.h"
/**
 * _isalpha - Checks for uppercase, lowercase and letter
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letter, lowercase, uppercase character and 0 for the rest
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
