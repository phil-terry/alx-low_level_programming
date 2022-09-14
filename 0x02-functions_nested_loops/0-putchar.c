#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - The main program
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{

	char c[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(c[a]);
	}

	_putchar('\n');
	return (0);
}
