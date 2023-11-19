#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the numbers of base 16 in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar((n % 10) + '0');
	}
	for (n = 'a' ; n <= 'f' ; n++)
	{
		putchar(n);
	}
		putchar ('\n');

		return (0);
}
