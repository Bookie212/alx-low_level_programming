#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int n = 48;

	do
	{
		putchar(n);
		if (n < 57)
			putchar(',');
			putchar(' ');
		n++;
	} while (n < 58);
	putchar('\n');
	return (0);
}
