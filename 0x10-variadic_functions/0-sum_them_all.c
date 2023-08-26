#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * main: sum
 * sum_them_all - sum of numbers
 * @n: integer
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int Sum = 0;

	va_list args;

	va_start(args, n);

	for (int i = 0; i < n; i++;)
		Sum += va_arg(args, int);
	va_end(args);

	return (Sum);
}

int main(void)
{
	_putchar("\n 1 + 2 = %d",
		sum_them_all(2, 1, 2));
	_putchar("\n");

	return (0);
}
