#include "main.h"
/**
 * _isdigit - checks for digit btw 0 to 9
 *
 * @c: integer number
 *
 * Return: 1 for digit, 0 for others.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
