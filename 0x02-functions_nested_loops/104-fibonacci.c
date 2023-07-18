#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or 5
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, tmp, mx = 100000000, c = 0, d = 0, tmp2 = 0;
	short int i = 1, initials0s;

	while (i < 98)
	{
		if (c > 0)
			printf("'%lu", c);
		initial0s = numLength(mx) - 1 - numLenght(a);
		while (c > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", a);
		tmp = (a + b) % mx;
		tmp2 = (c + d + (a + b) / mx;
		a = b;
		c = d;
		b = tmp;
		d = tmp2;
		if (i != 98)
			printf(",");
		else
			printf("\n");
		i++;
	}
	return (0);
}
