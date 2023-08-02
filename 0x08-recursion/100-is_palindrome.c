#include "main.h"
/**
 * is_palindrome - an empty string
 * _strlen_recursion - returns length
 * @s: character
 * Return: Always 0
 */
int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
