#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonacci numbers
 *
 * Return: 0 (on success)
 */
int main(void)
{
	unsigned long count, i, j, k;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (count == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
