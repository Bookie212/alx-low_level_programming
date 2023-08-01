#include "main.h"
/**
 * _memset - fills the first bytes of the memory area pointed to
 * @s: points to the first byte
 * @n: first byte
 * @b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
