#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
*/

int main(void)
{
	int ch = 97;

	for (ch = 97; ch <= 122; ch++)
		if (ch != 101 && ch != 113)
			putchar(ch);
	putchar('\n');
	return (0);
}
