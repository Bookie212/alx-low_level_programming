#include "main.h"
/**
 * wildcmp - compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 1
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	return (1);
}
