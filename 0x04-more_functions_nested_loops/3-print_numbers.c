#include "main.h"
/**
 * print_numbers - prints the numbers.
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar("%d", i);
	}
	_putchar('\n');
}
