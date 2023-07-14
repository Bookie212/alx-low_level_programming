#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0
 */

int main(void)
{
	int n;
	char x;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
