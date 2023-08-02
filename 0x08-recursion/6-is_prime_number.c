#include "main.h"
/**
 * is_prime_number - prime number
 * @n: integer
 * Return: 1
 */

int is_prime_number(int n)
{
	if (n == n / 2 + n)
		return (0);
	else
		return (1);
}
