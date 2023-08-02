#include "main.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: string to be printed
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
