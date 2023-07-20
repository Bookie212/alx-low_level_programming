#include "main.h"
/**
 * _isupper - To determine uppercase character
 *
 * @c: integer used
 *
 * Return: 1 for uppercase amd 0 for the rest.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
