#include "main.h"
/**
 * print_numbers - prints the numbers.
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar("\n");
	return (0);
}
