#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0
 * the use of char is not allowed
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
for (n = '0'; n <= '9'; ++n)
putchar(n);

putchar(10);

return (0);
}
