#include "main.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: string to be printed
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (s <= 0)
		return (1);
	return (strlen(s));
}
