#include "main.h"
/**
 * islower - Checks for lowercase
 *
 * Return: 1 for lowercase character. o for the rest.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
