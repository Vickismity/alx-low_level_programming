#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combination of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 49 ; j < 58 ; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
			if (i != 56 || i == 56 && j != 57)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
		putchar('\n');
		return (0);
}
