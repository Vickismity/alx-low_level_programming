#include "main.h"
#include <stdio.h>

/**
 * factorial - function name
 * @n: parameter of the given function
 * Return: factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
