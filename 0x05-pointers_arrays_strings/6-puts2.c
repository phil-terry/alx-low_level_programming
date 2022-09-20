#include "main.h"

/**
 *puts2 - prints every other char of a string.
 *@str: input string.
 *Return: no return.
 */

void puts2(char *str)
{
	int n, c = 0;
	char *temp = str;

	while (*str != '\0')
	{
		c = c + 1;
		str = str + 1;
	}
		str = temp;
	for (n = 0; n <= (c / 2); n++)
	{
		putchar(str[(n * 2)]);
	}
}
