#include "main.h"
/**
 * _strstr - finds the first occurrence of the needle in the haystack
 * @haystack: string to be scanned
 * @needle: string to be searched within haystack
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
