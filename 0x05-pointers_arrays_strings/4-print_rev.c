#include <stdio.h>

/**
 * print_rev -  print a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
			putchar(s[i]);

		putchar('\n');
}

