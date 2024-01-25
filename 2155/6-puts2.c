#include "main.h"

/**
 * puts2 - prints other characters of a string
 * starting with the first character
 * @str: the string to print
 *
 * Return: None (void)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
