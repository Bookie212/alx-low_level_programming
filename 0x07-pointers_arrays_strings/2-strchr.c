#include "main.h"
/**
 * _strchr - searches for the first occurrence of c
 * @s: string to be scanned
 * @c: character to be searched for in s
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
