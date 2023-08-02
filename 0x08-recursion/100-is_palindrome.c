#include "main.h"
/**
 * is_palindrome - an empty string
 * @s: character
 * Return: Always 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
		return (0);

	if (s(0) == len - 1)
		return (is_palindrome(s(1, len - 1)));
}
