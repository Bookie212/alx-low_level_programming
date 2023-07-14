#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; n < 10; m++)
		{
			if (m != n)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				if (n == 8 && m == 9)
					continue;
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
