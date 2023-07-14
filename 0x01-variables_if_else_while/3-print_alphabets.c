#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int n = 97;
	int x = 65;

	for (n = 97; n <= 122; n++)
		putchar(n);
	for (x = 65; x <= 90; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
