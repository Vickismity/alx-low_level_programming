#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arg;

	va_start(arg, n);
	for (a = 0 ; a < n ; a++)
	{
		char *y = va_arg(arg, char *);
			if (y == NULL)
				printf("nil");
			else
			       printf("%s", y);
			if (separator != NULL && a < n - 1)
				printf("%s", separator);
	}
		printf("\n");
		va_end(arg);
}
