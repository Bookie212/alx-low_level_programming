#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int n = '0';

	for (n = 0; n <= 9; n++)

	int x = '0';

	for (x = 0; n <= 9; x++)
		if (!((n == x) || (x > n)))
			putchar(x);
			putchar(n);
			if (!((n == 9 && x == 8)))
				putchar(',');
				putchar(' ');
	putchar('\n');
	return (0);
}
