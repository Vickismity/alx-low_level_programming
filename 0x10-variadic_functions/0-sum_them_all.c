#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: number of arguments
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int a;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (a = 0 ; a < n ; a++)
	{
		s = s + va_arg(arg, int);
	}
	va_end(arg);
	return (s);
}
