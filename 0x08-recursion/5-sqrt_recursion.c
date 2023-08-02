#include "main.h"
/**
 * _sqrt_recursion - returns the square root of n
 * @n: floating point value
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n % 2 != 0)
		return (-1);
	return (sqrt_recursion(n));
}
