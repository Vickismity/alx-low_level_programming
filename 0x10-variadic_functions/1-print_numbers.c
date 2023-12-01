#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - to write a function that prints a number
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arg;

	va_start(arg, n);
	for (a = 0 ; a < n ; a++)
	{
		if (separator != NULL)
		{
			printf("%d\n", va_arg(arg, int));
			printf("%s\n", separator);
		}
		else
			printf("%d\n", va_arg(arg, int));
	}
		printf("\n");
		va_end(arg);
}
