#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
