#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or 5
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fib1, = 0 fib2 = 1, sum;
	unsigned long fib3, fib4, fib5, fib6;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib 1 = fib2;
		fib2 = sum;
	}
	fib3 = fib1 / 1000000000;
	fib5 = fib2 / 1000000000;
	fib4 = fib1 % 1000000000;
	fib6 = fib2 % 1000000000;
	for (count = 93; count < 99; count++)
	{
		half1 = fib3 + fib4;
		half2 = fib5 + fib6;
		if (fib4 + fib6 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		fib3 = fib5;
		fib4 = fib6;
		fib5 = half1;
		fib6 = half2;
	}
	printf("\n");
	return (0);
}
