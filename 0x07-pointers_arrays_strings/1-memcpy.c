#include "main.h"
/**
 * _memcpy - copies memory space from one memory area to another
 * @dest: memory area
 * @src: memory area
 * @n: no of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
