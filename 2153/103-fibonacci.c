#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: find and print the sum of even Fibonacci numbers < 4,000,000
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
