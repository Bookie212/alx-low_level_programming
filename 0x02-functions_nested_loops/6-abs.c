#include "main.h"
/**
 * _abs- Computes the absolutvalue of an integer
 *
 * @i: Input number as an integer
 *
 * Return: Absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
